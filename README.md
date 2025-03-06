<h1>📌 Student Database Management System</h1>

<h2>📖 Introduction</h2>
<p>The Student Database Management System is a C++ program that allows users to store, retrieve, update, and delete student records using an <strong>unordered_map</strong> for efficient data management. The system provides a menu-driven interface to perform various operations on student records, such as inserting, searching, updating grades, and displaying all records.</p>

<h2>⚡ Features</h2>
<ul>
  <li>✅ <strong>Insert Student</strong> → Add student ID & grade to the database.</li>
  <li>✅ <strong>Delete Student</strong> → Remove a student using their ID.</li>
  <li>✅ <strong>Search Student</strong> → Find a student by their ID and display their grade.</li>
  <li>✅ <strong>Update Grade</strong> → Modify the grade of an existing student.</li>
  <li>✅ <strong>Display All Students</strong> → Show all students and their details.</li>
  <li>✅ <strong>Display Size</strong> → Show the total number of students.</li>
  <li>✅ <strong>Clear Database</strong> → Remove all student records.</li>
  <li>✅ <strong>Exit</strong> → Close the program.</li>
</ul>

<h2>🛠 How to Run the Program</h2>
<h3>🔹 Steps to Compile and Run (Using g++)</h3>
<ol>
  <li>Open a <strong>terminal</strong> or <strong>command prompt</strong>.</li>
  <li>Navigate to the folder where the file is saved.</li>
  <li>Compile the program using:
    <pre>g++ -o student_db student_db.cpp</pre>
  </li>
  <li>Run the program using:
    <pre>./student_db</pre>
  </li>
</ol>

<h2>📌 Usage Example</h2>
<h3>🔹 Menu Example</h3>
<pre>
Menu:
1. Insert Student
2. Delete Student
3. Search Student
4. Update Grade
5. Display All Students
6. Display Size
7. Clear Database
8. Exit
Enter your choice: 1
Enter student ID: 101
Enter student grade: 88.5
Student with ID 101 and grade 88.5 inserted.
</pre>

<h2>🔧 Technologies Used</h2>
<ul>
  <li>C++ (Standard Template Library - STL)</li>
  <li>unordered_map (for fast data access)</li>
</ul>

<h2>📂 File Structure</h2>
<pre>
/StudentDatabase
│── student_db.cpp   # Main source code file
│── README.md        # Documentation file
</pre>

<h2>🛠 Future Enhancements</h2>
<ul>
  <li>🚀 Add file handling to store data permanently.</li>
  <li>🚀 Implement sorting for student records.</li>
  <li>🚀 Add GPA calculation based on multiple subjects.</li>
</ul>

<h2>📜 License</h2>
<p>This project is open-source. Feel free to use, modify, and contribute!</p>

<h2>💡 Conclusion</h2>
<p>This system provides an efficient and interactive way to manage student records in C++ using unordered_map for fast operations like insertion, search, and deletion. Ideal for small-scale educational applications.</p>
