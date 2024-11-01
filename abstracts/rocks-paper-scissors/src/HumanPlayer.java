class HumanPlayer extends Player{
    private Scanner scanner;
    public HumanPlayer(String name){
        super(name);
        this.scanner = new Scanner(System.in);
    }

    @Override
    public String makeMove(){
        System.out.println(name + ", lütfen hamlenizi seçin (taş,kağıt,makas) : ")
        move = scanner.nextLine().toLowerCase();
        return move;

    }
    
}