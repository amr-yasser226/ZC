using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

public class CreateModel : PageModel
{
    [BindProperty]
    public TaskItem NewTask { get; set; }

    public IActionResult OnPost()
    {
        if (!ModelState.IsValid)
        {
            return Page();
        }

        IndexModel.Tasks.Add(NewTask);
        return RedirectToPage("Index");
    }
}
