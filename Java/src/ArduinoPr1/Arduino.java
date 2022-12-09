/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ArduinoPr1;

//https://fazecast.github.io/jSerialComm/
import com.fazecast.jSerialComm.SerialPort;
import java.io.IOException;

/**
 *
 * @author "el profe Ariel"
 */
public class Arduino {
    private SerialPort puertoSerie;      
    
    public boolean conectar(int indice){        
        puertoSerie = SerialPort.getCommPorts()[indice];
        puertoSerie.openPort();
        puertoSerie.setComPortParameters(9600, 8, 1, 0);
        puertoSerie.setComPortTimeouts(SerialPort.TIMEOUT_WRITE_BLOCKING, 0, 0); 
        return estaConectado();
    }
    
    public static SerialPort[] getPuertosSerie() {
        SerialPort puertos[] = SerialPort.getCommPorts();
        return puertos;
    }    
    

    public boolean estaConectado() {
        return puertoSerie.isOpen();
    }

    public boolean desconectar() {
        return puertoSerie.closePort();
    }

    
    public boolean enviarLetra(char valor) {
        try {
            puertoSerie.getOutputStream().write(valor);
            puertoSerie.getOutputStream().flush();
            return true;
        } catch (IOException ex) {           
            return false;
        }        
    }
    
    public boolean enviarTexto(String texto) {
        try {
            
            puertoSerie.getOutputStream().write(texto.getBytes());
            puertoSerie.getOutputStream().flush();
            return true;
        } catch (IOException ex) {            
            return false;
        }        
    }

}
