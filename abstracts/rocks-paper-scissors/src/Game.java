import java.util.ArrayList;
import java.util.List;

public class Game {
    private Player humanPlayer;
    private ComputerPlayer computerPlayer;
    private int humanScore = 0;
    private int computerScore = 0;
    private List<String> moveHistory = new ArrayList<>();

    public Game(Player humanPlayer, ComputerPlayer computerPlayer) {
        this.humanPlayer = humanPlayer;
        this.computerPlayer = computerPlayer;
    }

    public void playRound() {
        String humanMove = humanPlayer.makeMove();
        String computerMove = computerPlayer.makeMove();

        System.out.println(computerPlayer.name + "'in hamlesi: " + computerMove);
        determineWinner(humanMove, computerMove);
    }

    private void determineWinner(String humanMove, String computerMove) {
        moveHistory.add(humanPlayer.name + " - " + humanMove + " | " + computerPlayer.name + " - " + computerMove);

        if (humanMove.equals(computerMove)) {
            System.out.println("Beraberlik!");
        } 
        else if ((humanMove.equals("taş") && computerMove.equals("makas")) ||
                   (humanMove.equals("kağıt") && computerMove.equals("taş")) ||
                   (humanMove.equals("makas") && computerMove.equals("kağıt"))) {
            System.out.println(humanPlayer.name + " kazandı!");
            humanScore++;
        } 
        else {
            System.out.println(computerPlayer.name + " kazandı!");
            computerScore++;
        }
        System.out.println("Skor - " + humanPlayer.name + ": " + humanScore + ", " + computerPlayer.name + ": " + computerScore);
    }

    public void displayMoveHistory() {
        System.out.println("Hamle Geçmişi:");
        for (String move : moveHistory) {
            System.out.println(move);
        }
    }

    public int getHumanScore() {
        return humanScore;
    }

    public int getComputerScore() {
        return computerScore;
    }

}
