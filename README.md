<h2>Structure program for Employee details</h2>
<h3>Index</h3>
<ol>
  <li><a href="#Introduction">Introduction</a></li>
<li><a href="#Flow of the program">Flow of the program</a></li>
<li><a href="#Algorithm">Algorithms</a>
<ul>
<li><a href="#main()">Main function</a></li>
<li><a href="#create()">Creating the Employee details</a></li>
<li><a href="#getpsn()">Input the person details</a></li>
<li><a href="#getsal()">Input the salary details of person</a></li>
<li><a href="#checkpsn_name()">Validating the name of employee</a></li>
<li><a href="#check_dov()">Validating date of birth and joining of the employee</a></li>
</ul>
</li>
</ol>
<br>
<h3 id="Introduction">Introduction</h3>
<p>In this document I have wrote a code to understand how a structure is defined in another structure and how we can access the data via pointers as well get the employee details and print it out on the screen.</p
>
<br>
<h3 id="Flow of the program">Flow of the program</h3>
<br>
<h3 id="Algorithm">Algorithms</h3>
<h3 id="main()">Main function</h3>
<ol>
<li>First create a structure for taking input of <b><i>person</i></b> that includes members first name, last name and date of birth and give this structure a variable name as <b><i>psn.</i></b></li>
<li> Next we will create a structure for taking input of <b><i>salary</i></b> that includes members date of joining, initial salary, increment in salary, and current salary and give the structure a variable name as <b><i>sal.</i></b></li>
<li> Finally, create a structure to store both the person and salary details in a structure named <b><i>employee</i></b> with member pointers *p ,*s and a self referential structure pointer *next and assign a variable name <b><i>emp.</i></b></li>
<li>Now, write code in main function</li>
<li>Create a pointer named *emp1 and assign <b>NULL</b> to it as well declare a pointer to pointer **new_emp to access the person and salary structures which is of type <b>emp.</b></li>
<li>Now, assign the emp1 address to new_emp</li>
<li>Calling create() function by passing the new_emp value to it as an argument.</li>
<li>Calling print() function by passing new_emp value to it as an argument.</li>
</ol>

<h3 id="create()">Creating the Employee details</h3>
<ol>
<li> By using malloc() we will be creating the memory for employee.</li>
<li>By using malloc() we will be creating the memory for the person.</li>
<li>By using malloc() we will be creating the memory for the person salary details.</li>
<li> Now, we will be sending the memory allocated for person as an argument to get_psn() function.</li>
<li> Now, we will be sending the memory allocated fot person salary details as an argument to get_sal() function.</li>
<li>Print the details after taking the input from get_psn()</li>
</ol>

<h3 id="getpsn()">Input the person details</h3>
<ol>
<li>We will take the input from user by printing enter employee details like <i>first name.</i></li>
<li> Now, we will be passing the fname as an argument to <i>checkpsn_name()</i>for validation.</li>
<li> Now, we will take the input from user the <i>last name.</i></li>
<li> Now, we will pass the lname as an argument to <i> checkpsn_name()</i>for validation.</li>
<li> We will ask the user to enter the date of birth for the person in dd/mm/yyyy format.</li>
<li> Once we get the details from the user we will pass it as an argument to <i>check_dov()</i>for validation.</li>
</ol>

<h3 id="getsal()"> Input the salary details of person</h3>
<ol>
<li>We will print a statement with the person name taken from getpsn() to enter salary details.</li>
<li> We will ask the user to enter his/her initial salary.</li>
<li>Then we will check if the initial salary is less than or equal to zero then the user needs to re-enter the salary details.</li>
<li> After that we will take the input of increment percentage of salary.</li>
<li> The taken input is kept in a while loop to check if it's range is between 0 and 100. If it becomes less than or equal to zero or iit becomes greater than 100 the user needs to re-enter the increment salary.</li>
<li> Now, we will take the date of joining details from the user.</li>
<li> Once we get the details we will send it as an argument to <i>check_dov()</i> for validation.</li>
</ol>

<h3 id="checkpsn_name()">Validating the name of employee</h3>
<ol>
<li> We are taking an integer variable i for looping</li>
<li> We will check the condition if the given input doesn't be present in the range of characters i.e between 65 to 90 and 97 to 122.</li>
<li>If not we will be re-entering the name.</li>
</ol>

<h3 id="check_dov()">Validating date of birth and joining of the employee</h3>





