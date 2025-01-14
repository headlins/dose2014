PRAGMA foreign_keys = ON;

DROP TABLE IF EXISTS comment;
DROP TABLE IF EXISTS task;
DROP TABLE IF EXISTS project;
DROP TABLE IF EXISTS user;


CREATE TABLE user (
id INTEGER PRIMARY KEY AUTOINCREMENT,
email TEXT UNIQUE,
username TEXT NOT NULL UNIQUE,
password TEXT NOT NULL,
name TEXT,
last_login DATE NULL,
is_admin INTEGER NOT NULL,
salt INTEGER DEFAULT 0
);

CREATE  TABLE project (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL ,
  deadline DATE NULL ,
  client_name TEXT NULL ,
  id_user INTEGER NULL REFERENCES user (id ) ON DELETE SET NULL ON UPDATE CASCADE),
  is_finished	INTEGER DEFAULT 0);

CREATE  TABLE task (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  title TEXT NOT NULL ,
  description TEXT NULL ,
  status TEXT NULL ,
  priority TEXT NULL ,
  deadline DATE NULL ,
  estimation TEXT NULL ,
  id_user_creator INTEGER NULL REFERENCES user (id ) ON DELETE SET NULL ON UPDATE CASCADE,
  id_user_assigned INTEGER NULL REFERENCES user (id ) ON DELETE SET NULL ON UPDATE CASCADE,
  id_project INTEGER NULL REFERENCES project (id ) ON DELETE CASCADE ON UPDATE CASCADE);

CREATE  TABLE comment (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  commentary TEXT NULL ,
  id_task INTEGER NULL REFERENCES task (id ) ON DELETE CASCADE ON UPDATE CASCADE,
  id_user INTEGER NULL REFERENCES user (id ) ON DELETE SET NULL ON UPDATE CASCADE);
