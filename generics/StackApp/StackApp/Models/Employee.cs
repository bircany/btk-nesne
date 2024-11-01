namespace StackApp.Models;
public class Employee
{
#pragma warning disable CS8618 // Non-nullable field must contain a non-null value when exiting constructor. Consider adding the 'required' modifier or declaring as nullable.
    public Employee()
#pragma warning restore CS8618 // Non-nullable field must contain a non-null value when exiting constructor. Consider adding the 'required' modifier or declaring as nullable.
    {
        
    }
    public Employee(string firstName, string lastName, decimal salary)
    {
        FirstName = firstName;
        LastName = lastName;
        Salary = salary;
    }

    public String FirstName { get; set; } = String.Empty;
    public String LastName { get; set; }
    public Decimal Salary { get; set; } = 0;
    public String FullName => FirstName + " " + LastName;
    public override string ToString(){
        return string.Concat(FullName + " " + Salary);
    }

}