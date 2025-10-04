package ec.edu.espe.crud.controller;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConnectionToMySQL {
    private Connection connection;

    public ConnectionToMySQL() {
        try {
            // Correct driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Full connection string with user and password
            String url = "jdbc:mysql://localhost:3307/registro?useSSL=false&serverTimezone=UTC";
            String user = "root";     // change if you use another user
            String password = "";     // put your MySQL password here, leave "" if none

            connection = DriverManager.getConnection(url, user, password);
            System.out.println("✅ Connected to database successfully!");
        } catch (ClassNotFoundException e) {
            System.err.println("❌ Driver not found: " + e.getMessage());
        } catch (SQLException e) {
            System.err.println("❌ SQL error: " + e.getMessage());
        }
    }

    public Connection getConnection() {
        return connection;
    }
}
