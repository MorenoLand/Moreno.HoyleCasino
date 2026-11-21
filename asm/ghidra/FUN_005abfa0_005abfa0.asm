; FUN_005abfa0  005abfa0
005abfa0  PUSH EBP
005abfa1  MOV EBP,ESP
005abfa3  SUB ESP,0x10
005abfa6  MOV dword ptr [EBP + -0x10],ECX
005abfa9  MOV ECX,dword ptr [EBP + -0x10]
005abfac  CALL 0x005e9e20
005abfb1  MOV EAX,dword ptr [EBP + -0x10]
005abfb4  MOV dword ptr [EAX],0x6cfe54
005abfba  MOV dword ptr [EBP + -0x4],0x0
005abfc1  JMP 0x005abfcc
005abfc3  MOV ECX,dword ptr [EBP + -0x4]
005abfc6  ADD ECX,0x1
005abfc9  MOV dword ptr [EBP + -0x4],ECX
005abfcc  CMP dword ptr [EBP + -0x4],0x4
005abfd0  JGE 0x005ac005
005abfd2  MOV dword ptr [EBP + -0x8],0x0
005abfd9  JMP 0x005abfe4
005abfdb  MOV EDX,dword ptr [EBP + -0x8]
005abfde  ADD EDX,0x1
005abfe1  MOV dword ptr [EBP + -0x8],EDX
005abfe4  CMP dword ptr [EBP + -0x8],0x16
005abfe8  JGE 0x005ac003
005abfea  MOV EAX,dword ptr [EBP + -0x4]
005abfed  IMUL EAX,EAX,0x58
005abff0  MOV ECX,dword ptr [EBP + -0x10]
005abff3  LEA EDX,[ECX + EAX*0x1 + 0x28]
005abff7  MOV EAX,dword ptr [EBP + -0x8]
005abffa  MOV dword ptr [EDX + EAX*0x4],0x0
005ac001  JMP 0x005abfdb
005ac003  JMP 0x005abfc3
005ac005  MOV dword ptr [EBP + -0xc],0x0
005ac00c  JMP 0x005ac017
005ac00e  MOV ECX,dword ptr [EBP + -0xc]
005ac011  ADD ECX,0x1
005ac014  MOV dword ptr [EBP + -0xc],ECX
005ac017  CMP dword ptr [EBP + -0xc],0x4
005ac01b  JGE 0x005ac03b
005ac01d  MOV EDX,dword ptr [EBP + -0xc]
005ac020  MOV EAX,dword ptr [EBP + -0x10]
005ac023  MOV dword ptr [EAX + EDX*0x4 + 0x8],0x0
005ac02b  MOV ECX,dword ptr [EBP + -0xc]
005ac02e  MOV EDX,dword ptr [EBP + -0x10]
005ac031  MOV dword ptr [EDX + ECX*0x4 + 0x18],0x0
005ac039  JMP 0x005ac00e
005ac03b  MOV EAX,dword ptr [EBP + -0x10]
005ac03e  MOV ESP,EBP
005ac040  POP EBP
005ac041  RET
