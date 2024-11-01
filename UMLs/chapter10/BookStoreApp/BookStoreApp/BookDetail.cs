using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStoreApp
{
    public class BookDetail
    {
        public int BookDetailId { get; set; }
        public int BookId { get; set; }
        public string ISBN { get; set; }
        public string Publisher { get; set; }
        public Book Book { get; set; }

    }
}