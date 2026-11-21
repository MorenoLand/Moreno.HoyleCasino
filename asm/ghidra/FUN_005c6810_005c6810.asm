; FUN_005c6810  005c6810
005c6810  PUSH EBP
005c6811  MOV EBP,ESP
005c6813  SUB ESP,0x60
005c6816  MOV dword ptr [EBP + -0x5c],ECX
005c6819  MOV EAX,dword ptr [EBP + -0x5c]
005c681c  MOV dword ptr [EAX + 0x4],0x0
005c6823  MOV ECX,dword ptr [EBP + -0x5c]
005c6826  MOV dword ptr [ECX + 0x8],0x0
005c682d  MOV EDX,dword ptr [EBP + -0x5c]
005c6830  MOV dword ptr [EDX + 0xc],0x0
005c6837  CMP dword ptr [EBP + 0x8],0x0
005c683b  JNZ 0x005c6843
005c683d  XOR AL,AL
005c683f  JMP 0x005c68a2
005c6843  MOV dword ptr [EBP + -0x4],0x3fffffff
005c684a  CMP dword ptr [EBP + -0x4],0x0
005c684e  JBE 0x005c6858
005c6850  MOV EAX,dword ptr [EBP + -0x4]
005c6853  MOV dword ptr [EBP + -0x60],EAX
005c6856  JMP 0x005c685f
005c6858  MOV dword ptr [EBP + -0x60],0x1
005c685f  MOV ECX,dword ptr [EBP + -0x60]
005c6862  CMP ECX,dword ptr [EBP + 0x8]
005c6865  JNC 0x005c686e
005c6867  CALL 0x005c6020
005c686c  JMP 0x005c68a0
005c686e  PUSH 0x0
005c6870  MOV EDX,dword ptr [EBP + 0x8]
005c6873  PUSH EDX
005c6874  CALL 0x005c6310
005c6879  ADD ESP,0x8
005c687c  MOV ECX,dword ptr [EBP + -0x5c]
005c687f  MOV dword ptr [ECX + 0x4],EAX
005c6882  MOV EDX,dword ptr [EBP + -0x5c]
005c6885  MOV EAX,dword ptr [EBP + -0x5c]
005c6888  MOV ECX,dword ptr [EAX + 0x4]
005c688b  MOV dword ptr [EDX + 0x8],ECX
005c688e  MOV EDX,dword ptr [EBP + -0x5c]
005c6891  MOV EAX,dword ptr [EDX + 0x4]
005c6894  MOV ECX,dword ptr [EBP + 0x8]
005c6897  LEA EDX,[EAX + ECX*0x4]
005c689a  MOV EAX,dword ptr [EBP + -0x5c]
005c689d  MOV dword ptr [EAX + 0xc],EDX
005c68a0  MOV AL,0x1
005c68a2  MOV ESP,EBP
005c68a4  POP EBP
005c68a5  RET 0x4
