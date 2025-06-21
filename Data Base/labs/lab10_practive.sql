-- Use the database
USE [SurveyDB];
GO

-- Display all student IDs whose favourite color is black
SELECT StudentId 
FROM FavouriteColors 
WHERE Color = 'Black';
GO

-- Get all students who have an email on Hotmail
SELECT * 
FROM StudentInfo 
WHERE Email LIKE '%@hotmail%';
GO

-- Get all students whose first name or last name starts with "Abd"
SELECT * 
FROM StudentInfo 
WHERE [First Name] LIKE 'Abd%' OR [Last Name] LIKE 'Abd%';
GO

-- Display the list of distinct emotions in the Emotions table
SELECT DISTINCT Emotion 
FROM Emotions;
GO

-- Set the primary key for StudentInfo as the ID column
ALTER TABLE StudentInfo
ALTER COLUMN Id NVARCHAR(255) NOT NULL;
ALTER TABLE StudentInfo
ADD CONSTRAINT PK_StudentInfo PRIMARY KEY (Id);
GO

-- Add an auto-incrementing ID column to Emotions
ALTER TABLE Emotions
ADD Id INT IDENTITY(1,1) PRIMARY KEY;
GO

-- Set the email field in StudentInfo to be unique
ALTER TABLE StudentInfo
ADD CONSTRAINT UQ_Email UNIQUE (Email);
GO

-- Define foreign key dependencies for all tables
ALTER TABLE QuestionAnswers
ADD CONSTRAINT FK_QuestionAnswers_StudentInfo FOREIGN KEY (StudentId) REFERENCES StudentInfo(Id),
    CONSTRAINT FK_QuestionAnswers_FormQuestions FOREIGN KEY (QuestionId) REFERENCES FormQuestions(QuestionId);

ALTER TABLE CourseEmotions
ADD CONSTRAINT FK_CourseEmotions_StudentInfo FOREIGN KEY (StudentId) REFERENCES StudentInfo(Id);

ALTER TABLE FavouriteColors
ADD CONSTRAINT FK_FavouriteColors_StudentInfo FOREIGN KEY (StudentId) REFERENCES StudentInfo(Id);
GO

-- Add a constraint to the week column in CourseEmotions to be between 1 and 14
ALTER TABLE CourseEmotions
ADD CONSTRAINT CHK_WeekRange CHECK (Week BETWEEN 1 AND 14);
GO

-- Get a list of student names who are strictly visual learners, and also show their emails and favourite color
SELECT [First Name] + ' ' + [Last Name] AS FullName, Email, Color 
FROM StudentInfo 
INNER JOIN FavouriteColors ON StudentInfo.Id = FavouriteColors.StudentId
WHERE [Learning Pattern] = 'Visual'
ORDER BY FullName ASC;
GO

-- Get all students who use all four learning patterns
SELECT * 
FROM StudentInfo 
WHERE [Learning Pattern] = 'Visual, Kinesthetic, Auditory, Reading and Writing';
GO

-- Filter out all answers to the first question only
SELECT * 
FROM QuestionAnswers 
WHERE QuestionId = 1;
GO

-- Display the QuestionAnswers table with the text of each question and hide the id
SELECT q.Question, qa.Answer 
FROM QuestionAnswers qa
INNER JOIN FormQuestions q ON qa.QuestionId = q.QuestionId;
GO

-- Find all students with a first name starting with 'S' and consisting of 5 characters
SELECT * 
FROM StudentInfo 
WHERE [First Name] LIKE 'S____';
GO

-- Find all students with a last name ending with the letter 'y'
SELECT * 
FROM StudentInfo 
WHERE [Last Name] LIKE '%y';
GO

-- Rename the Timestamp field in Emotions to Date and change its data type to store only the date part
EXEC sp_rename 'Emotions.Timestamp', 'Date', 'COLUMN';
ALTER TABLE Emotions
ALTER COLUMN Date DATE;
GO

-- Create a new table called Majors
CREATE TABLE Majors (
    Id NVARCHAR(255),
    Major NVARCHAR(255),
    FOREIGN KEY (Id) REFERENCES StudentInfo(Id)
);
GO

-- Insert 5 majors for 5 random students
INSERT INTO Majors (Id, Major) VALUES ('202123226', 'Nanoscience');
INSERT INTO Majors (Id, Major) VALUES ('202054211', 'Engineering');
INSERT INTO Majors (Id, Major) VALUES ('202011564', 'Physics');
INSERT INTO Majors (Id, Major) VALUES ('202223001', 'Mathematics');
INSERT INTO Majors (Id, Major) VALUES ('202323456', 'Biology');
GO

-- Change the first name of the student with ID 202054211 from "Dana" to "Dina"
UPDATE StudentInfo
SET [First Name] = 'Dina'
WHERE Id = '202054211';
GO

-- Show the students' full names and their favourite colors
SELECT [First Name] + ' ' + [Last Name] AS FullName, Color 
FROM StudentInfo 
INNER JOIN FavouriteColors ON StudentInfo.Id = FavouriteColors.StudentId;
GO

-- Add a BirthDate column to StudentInfo
ALTER TABLE StudentInfo
ADD BirthDate DATE;
GO

-- Insert a new student
INSERT INTO StudentInfo (Id, [First Name], [Last Name], Email, Section, BirthDate, [Learning Pattern]) 
VALUES ('202011564', 'Abdelaziz', 'Soliman', 'asoliman@gmail.com', 2, '2003-12-20', 'Auditory');
INSERT INTO FavouriteColors (StudentId, Color) VALUES ('202011564', 'Purple');
GO

-- Add an Age column to StudentInfo
ALTER TABLE StudentInfo
ADD Age AS (YEAR(GETDATE()) - YEAR(BirthDate));
GO

-- Set the Question field in FormQuestions table to NOT NULL
ALTER TABLE FormQuestions
ALTER COLUMN Question NVARCHAR(255) NOT NULL;
GO

-- Retrieve all the students who felt "excited to learn web development"
SELECT StudentId 
FROM Emotions 
WHERE Emotion = 'excited to learn web development :)';
GO

-- Change the emotion value to "excited to learn"
UPDATE Emotions
SET Emotion = 'excited to learn'
WHERE Emotion = 'excited to learn web development :)';
GO

-- Find the total number of students who felt "Happy"
SELECT COUNT(StudentId) AS TotalHappyStudents 
FROM Emotions 
WHERE Emotion = 'Happy';
GO

-- Update students without a favourite color to "no answer"
UPDATE FavouriteColors
SET Color = 'no answer'
WHERE Color IS NULL;
GO

-- Display attendees of both events
SELECT DISTINCT Name 
FROM Event1 
INNER JOIN Event2 ON Event1.StudentId = Event2.StudentId;
GO

-- Display attendees of event 1 but not event 2
SELECT Name 
FROM Event1 
WHERE StudentId NOT IN (SELECT StudentId FROM Event2)
ORDER BY Name DESC;
GO

-- Display attendees of either event1 or event2 without duplicates
SELECT DISTINCT Name 
FROM Event1 
UNION 
SELECT DISTINCT Name 
FROM Event2
ORDER BY Name DESC;
GO

-- Create a view for attendees of either event
CREATE VIEW EventAttendees AS
SELECT DISTINCT Name 
FROM Event1 
UNION 
SELECT DISTINCT Name 
FROM Event2
ORDER BY Name ASC;
GO

-- Create a view for student names and their emotions
CREATE VIEW StudentEmotions AS
SELECT [First Name] + ' ' + [Last Name] AS FullName, Emotion, Date
FROM StudentInfo 
INNER JOIN Emotions ON StudentInfo.Id = Emotions.StudentId;
GO

-- Extract the college entrance year from the Student ID
SELECT Id, LEFT(Id, 4) AS CollegeEntranceYear 
FROM StudentInfo;
GO
