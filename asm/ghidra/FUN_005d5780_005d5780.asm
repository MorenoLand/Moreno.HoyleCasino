; FUN_005d5780  005d5780
005d5780  PUSH EBP
005d5781  MOV EBP,ESP
005d5783  SUB ESP,0x44
005d5786  MOV dword ptr [EBP + -0x44],ECX
005d5789  MOV dword ptr [EBP + -0x38],0x0
005d5790  MOV dword ptr [EBP + -0x34],0x2
005d5797  MOV dword ptr [EBP + -0x30],0x4
005d579e  MOV dword ptr [EBP + -0x2c],0x6
005d57a5  MOV dword ptr [EBP + -0x28],0x8
005d57ac  MOV dword ptr [EBP + -0x24],0xa
005d57b3  MOV dword ptr [EBP + -0x20],0xc
005d57ba  MOV dword ptr [EBP + -0x1c],0xe
005d57c1  MOV dword ptr [EBP + -0x18],0x10
005d57c8  MOV dword ptr [EBP + -0x14],0x12
005d57cf  MOV dword ptr [EBP + -0x10],0x14
005d57d6  MOV dword ptr [EBP + -0xc],0x16
005d57dd  MOV dword ptr [EBP + -0x8],0xc
005d57e4  MOV ECX,dword ptr [EBP + -0x44]
005d57e7  CALL 0x0063aac0
005d57ec  MOV EAX,dword ptr [EAX]
005d57ee  MOV dword ptr [EBP + -0x3c],EAX
005d57f1  CMP dword ptr [EBP + -0x3c],0x3
005d57f5  JNZ 0x005d57fb
005d57f7  MOV AL,0x1
005d57f9  JMP 0x005d582e
005d57fb  MOV dword ptr [EBP + -0x4],0x0
005d5802  JMP 0x005d580d
005d5804  MOV ECX,dword ptr [EBP + -0x4]
005d5807  ADD ECX,0x1
005d580a  MOV dword ptr [EBP + -0x4],ECX
005d580d  MOV EDX,dword ptr [EBP + -0x4]
005d5810  CMP EDX,dword ptr [EBP + -0x8]
005d5813  JGE 0x005d582c
005d5815  MOV ECX,dword ptr [EBP + -0x44]
005d5818  CALL 0x004842b0
005d581d  MOV ECX,dword ptr [EBP + -0x4]
005d5820  CMP EAX,dword ptr [EBP + ECX*0x4 + -0x38]
005d5824  JNZ 0x005d582a
005d5826  MOV AL,0x1
005d5828  JMP 0x005d582e
005d582a  JMP 0x005d5804
005d582c  XOR AL,AL
005d582e  MOV ESP,EBP
005d5830  POP EBP
005d5831  RET
