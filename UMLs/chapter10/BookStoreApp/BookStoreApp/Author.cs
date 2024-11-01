using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStoreApp
{
    public class Author
    {
        public int AuthorId { get; set; }
        public string FullName { get; set; }
        public ICollection<BookAuthor> BookAuthors { get; set; }
    }
}