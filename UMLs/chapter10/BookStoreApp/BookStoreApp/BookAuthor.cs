using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStoreApp
{
    public class BookAuthor
    {
        public int BookAuthorId { get; set; }
        public int BookId { get; set; }
        public int AuthorId { get; set; }
        public Book Book { get; set; }
        public Author Author { get; set; }
    }
}