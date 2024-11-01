abstract class Player {
    protected String name;
    protected String move;
    public Player(String name){
        this.name = name;
    }
    public abstract String makeMove();

}
