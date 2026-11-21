; FUN_005cad50  005cad50
005cad50  PUSH EBP
005cad51  MOV EBP,ESP
005cad53  SUB ESP,0x9c
005cad59  MOV dword ptr [EBP + 0xffffff64],ECX
005cad5f  FLD double ptr [0x006b3e40]
005cad65  FSTP double ptr [EBP + 0xffffff68]
005cad6b  FLD1
005cad6d  FSTP double ptr [EBP + 0xffffff70]
005cad73  FLD double ptr [0x006be720]
005cad79  FSTP double ptr [EBP + 0xffffff78]
005cad7f  FLD double ptr [0x006be518]
005cad85  FSTP double ptr [EBP + -0x80]
005cad88  FLD double ptr [0x006d2430]
005cad8e  FSTP double ptr [EBP + -0x78]
005cad91  FLD double ptr [0x006be520]
005cad97  FSTP double ptr [EBP + -0x70]
005cad9a  FLD double ptr [0x006b4b00]
005cada0  FSTP double ptr [EBP + -0x68]
005cada3  FLD double ptr [0x006d2568]
005cada9  FSTP double ptr [EBP + -0x60]
005cadac  FLD double ptr [0x006bc208]
005cadb2  FSTP double ptr [EBP + -0x58]
005cadb5  FLD double ptr [0x006d2560]
005cadbb  FSTP double ptr [EBP + -0x50]
005cadbe  FLD double ptr [0x006d2558]
005cadc4  FSTP double ptr [EBP + -0x48]
005cadc7  FLD double ptr [0x006d2550]
005cadcd  FSTP double ptr [EBP + -0x40]
005cadd0  FLD double ptr [0x006d2548]
005cadd6  FSTP double ptr [EBP + -0x38]
005cadd9  FLD double ptr [0x006cae30]
005caddf  FSTP double ptr [EBP + -0x30]
005cade2  FLD double ptr [0x006d2540]
005cade8  FSTP double ptr [EBP + -0x28]
005cadeb  FLD double ptr [0x006ca358]
005cadf1  FSTP double ptr [EBP + -0x20]
005cadf4  FLD double ptr [0x006d2538]
005cadfa  FSTP double ptr [EBP + -0x18]
005cadfd  FLD double ptr [0x006d2438]
005cae03  FSTP double ptr [EBP + -0x10]
005cae06  MOV dword ptr [EBP + -0x4],0x0
005cae0d  JMP 0x005cae18
005cae0f  MOV EAX,dword ptr [EBP + -0x4]
005cae12  ADD EAX,0x1
005cae15  MOV dword ptr [EBP + -0x4],EAX
005cae18  CMP dword ptr [EBP + -0x4],0x12
005cae1c  JGE 0x005cae98
005cae1e  MOV ECX,dword ptr [EBP + -0x4]
005cae21  MOV EDX,dword ptr [EBP + 0xffffff64]
005cae27  FLD double ptr [EDX + 0x1e0]
005cae2d  FCOMP double ptr [EBP + ECX*0x8 + 0xffffff68]
005cae34  FNSTSW AX
005cae36  TEST AH,0x44
005cae39  JP 0x005cae93
005cae3b  CMP dword ptr [EBP + 0x8],0x0
005cae3f  JNZ 0x005cae59
005cae41  MOV EAX,dword ptr [EBP + 0xffffff64]
005cae47  MOV ECX,dword ptr [EBP + -0x4]
005cae4a  FLD double ptr [EBP + ECX*0x8 + 0xffffff60]
005cae51  FSTP double ptr [EAX + 0x1e0]
005cae57  JMP 0x005cae6f
005cae59  MOV EDX,dword ptr [EBP + 0xffffff64]
005cae5f  MOV EAX,dword ptr [EBP + -0x4]
005cae62  FLD double ptr [EBP + EAX*0x8 + 0xffffff70]
005cae69  FSTP double ptr [EDX + 0x1e0]
005cae6f  MOV ECX,dword ptr [EBP + 0xffffff64]
005cae75  CALL 0x005cab60
005cae7a  PUSH EAX
005cae7b  MOV ECX,dword ptr [EBP + 0xffffff64]
005cae81  MOV EDX,dword ptr [ECX]
005cae83  MOV ECX,dword ptr [EBP + 0xffffff64]
005cae89  MOV EAX,dword ptr [EDX + 0xc8]
005cae8f  CALL EAX
005cae91  JMP 0x005cae98
005cae93  JMP 0x005cae0f
005cae98  MOV ESP,EBP
005cae9a  POP EBP
005cae9b  RET 0x4
