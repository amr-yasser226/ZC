using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

public class SurveyModel : PageModel
{
    public string[] Hobbies { get; private set; }

    public void OnGet()
    {
        Hobbies = new string[] { "Reading", "Writting", "Running", "Cooking", "Playing Video Games" };
    }

    public IActionResult OnPost(string name, string[] hobbies)
    {
        return RedirectToPage("Survey");
    }
}
