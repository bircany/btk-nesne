import java.util.Random;

class RandomComputerPlayer extends ComputerPlayer {
    private static final String[] MOVES = {"taş","kagit","makas"};
    private final Random random;
    public RandomComputerPlayer(String name){
        super(name);
        this.random = new Random();
    }
    @Override 
    public String makeMove(){
        move = MOVES[random.nextInt(MOVES.length)];
        return move;
    }
    
}
