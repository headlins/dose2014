'use strict';

angular.module('Demo.controllers')
  .controller('TaskCtrl', ['$scope', '$http', '$log',
	function ($scope, $http, $log) {

      $scope.tasks = [];

      var init = function() {
		// Initialization function that gets the tasks from the server
      }();
	  
	  $scope.getTask = function(taskId) {
		// Gets from the server the task with the id=taskId
      }
	  
	  $scope.getAllTasksForUser = function(userId) {
		// Gets all tasks for the user with id=userId
      }
	  
	  $scope.getAllTasksForSprint = function(sprintId) {
		// Gets all tasks for the sprint with id=sprintId
      }
	  
	  $scope.getAllTasksForProject = function(projectId) {
		// Gets all tasks for the project with id=projectId
      }
	  
      $scope.createTask = function(name, description, points, projectId) {
		// Creates a new task for a project (can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.deleteTask = function(taskId) {
		// Deletes a task (can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.editTask = function(requirementId, name, description, points) {
		// Modifies the name, the description and the points of a task with certain id(can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.assignToUser = function(taskId, userId) {
		// Assigns a user to a task (can be executed only by the project manager and the team leader of the project)
		// If the userId is not valid the requirement should be reassigned to nobody.
      }
	  
	  $scope.setTaskStatus = function(task, status) {
		// Set the status of a task (can be executed only by the owner or executor)
      }

	  $scope.assignTaskToSprint = function(taskId, sprintId) {
		// Assigns the task with the id=taskId to the sprint with the id=sprintId
      }
	  
	  $scope.getPointsForTask = function(taskId) {
		// Gets the points of the task with the id=taskId
      }
    }  
  ]);