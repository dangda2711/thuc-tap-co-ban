/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dbconnect01;

/**
 *
 * @author tinhpham
 */
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

public class DbConnect01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] argv) throws SQLException  {
        try {
            String driver = "com.mysql.jdbc.Driver";
            String connection = 
                    "jdbc:mysql://localhost:3306/ktpmud?useSSL=false";
            String user = "root";
            String password = "root";
            Class.forName(driver);            
            Connection con = DriverManager.getConnection(connection, user, password);
            Statement st= con.createStatement();
            ResultSet rs=st.executeQuery("SELECT * FROM sinhvien");
            while(rs.next())
            {
                System.out.println("masv:"+rs.getString("masv")+", ten: "+rs.getString("ten"));
            }
            st.execute("INSERT INTO sinhvien(masv,ten) VALUES(7,'Phạm Văn Bằng')");
            if (!con.isClosed()) {
                con.close();
            }   } catch (ClassNotFoundException ex) {
            Logger.getLogger(DbConnect01.class.getName()).log(Level.SEVERE, null, ex);
        }
  }
    
}
