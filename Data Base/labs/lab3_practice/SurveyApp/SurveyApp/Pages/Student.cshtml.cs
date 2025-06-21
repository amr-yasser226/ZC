using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

public class StudentModel : PageModel
{
    public string[,] Students = new string[3, 2]
    {
        { "Amr Yasser", "202301043" },
        { "Omar", "202200486" },
        { "Ali", "202001130" }
    };

    public string[,] Grades = new string[3, 2]
    {
        { "202301043", "A" },
        { "202200486", "B" },
        { "202001130", "A" }
    };

    public void OnGet()
    {
    }

    public string GetGradeForStudent(string studentId)
    {
        for (int i = 0; i < Grades.GetLength(0); i++)
        {
            if (Grades[i, 0] == studentId)
            {
                return Grades[i, 1];
            }
        }
        return "N/A";
    }
}
