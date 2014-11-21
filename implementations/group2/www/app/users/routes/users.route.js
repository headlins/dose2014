'use strict';
//Setting up route
angular.module('coffee.core').config(['$stateProvider',
    function($stateProvider) {

        var checkLoggedOut = function($q, $timeout, $http, $location) {
            var deferred = $q.defer();
            //$http.get('http://localhost:3000/loggedin').success(function(user) {
            $http.get('/session/loggedin').success(function(user) {
                // Authenticated
                if (user !== '0') {
                    $timeout(deferred.reject);
                    $location.url('/');
                } else { // Not Authenticated
                    $timeout(deferred.resolve);
                }
            });

            return deferred.promise;
        };

        // states for my app
        $stateProvider.
        state('login', {
            url: '/login',
            templateUrl: '/app/users/views/login.html',
            resolve: {
                loggedout: checkLoggedOut
            }
        }).state('register', {
            url: '/register',
            templateUrl: '/app/users/views/register.html',
            resolve: {
                loggedout: checkLoggedOut
            }
        });
    }
]);