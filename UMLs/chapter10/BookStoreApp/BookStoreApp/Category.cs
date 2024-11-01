using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStoreApp
{
    public class Category
    {
        public int CategoryId { get; set; }
        public string CategoryName { get; set; }
        public ICollection<Book> Books { get; set; }
    }
}