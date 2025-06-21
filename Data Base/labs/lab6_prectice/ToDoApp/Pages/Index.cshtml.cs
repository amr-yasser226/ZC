using Microsoft.AspNetCore.Mvc.RazorPages;
using System.Collections.Generic;

public class IndexModel : PageModel
{
    public static List<TaskItem> Tasks = new List<TaskItem>();
    public void OnGet()
    {
    }
}
