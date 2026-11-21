; FUN_0043aff0  0043aff0
0043aff0  PUSH EBP
0043aff1  MOV EBP,ESP
0043aff3  SUB ESP,0x34
0043aff6  MOV dword ptr [EBP + -0x20],ECX
0043aff9  MOV EAX,dword ptr [EBP + 0x8]
0043affc  MOV ECX,dword ptr [EAX*0x8 + 0x713234]
0043b003  MOV dword ptr [EBP + -0x4],ECX
0043b006  MOV EDX,dword ptr [EBP + 0x8]
0043b009  MOV dword ptr [EBP + -0x24],EDX
0043b00c  MOV EAX,dword ptr [EBP + -0x24]
0043b00f  SUB EAX,0x1
0043b012  MOV dword ptr [EBP + -0x24],EAX
0043b015  CMP dword ptr [EBP + -0x24],0x3c
0043b019  JA 0x0043b172
0043b01f  MOV ECX,dword ptr [EBP + -0x24]
0043b022  MOVZX EDX,byte ptr [ECX + 0x43b190]
0043b029  JMP dword ptr [EDX*0x4 + 0x43b17c]
0043b030  MOV EAX,dword ptr [EBP + -0x8]
0043b033  MOV dword ptr [EBP + -0x28],EAX
0043b036  MOV ECX,dword ptr [EBP + -0x20]
0043b039  MOV EDX,dword ptr [ECX + 0xac4]
0043b03f  MOV dword ptr [EBP + -0x28],EDX
0043b042  MOV EAX,dword ptr [EBP + -0x28]
0043b045  SUB EAX,0x4
0043b048  MOV dword ptr [EBP + -0x28],EAX
0043b04b  CMP dword ptr [EBP + -0x28],0x6
0043b04f  JA 0x0043b074
0043b051  MOV ECX,dword ptr [EBP + -0x28]
0043b054  JMP dword ptr [ECX*0x4 + 0x43b1d0]
0043b05b  MOV dword ptr [EBP + -0x4],0x1
0043b062  JMP 0x0043b074
0043b064  MOV dword ptr [EBP + -0x4],0x2
0043b06b  JMP 0x0043b074
0043b06d  MOV dword ptr [EBP + -0x4],0x5
0043b074  JMP 0x0043b172
0043b079  MOV EDX,dword ptr [EBP + -0xc]
0043b07c  MOV dword ptr [EBP + -0x2c],EDX
0043b07f  MOV EAX,dword ptr [EBP + -0x20]
0043b082  MOV ECX,dword ptr [EAX + 0xac4]
0043b088  MOV dword ptr [EBP + -0x2c],ECX
0043b08b  MOV EDX,dword ptr [EBP + -0x2c]
0043b08e  SUB EDX,0x4
0043b091  MOV dword ptr [EBP + -0x2c],EDX
0043b094  CMP dword ptr [EBP + -0x2c],0x6
0043b098  JA 0x0043b0bd
0043b09a  MOV EAX,dword ptr [EBP + -0x2c]
0043b09d  JMP dword ptr [EAX*0x4 + 0x43b1ec]
0043b0a4  MOV dword ptr [EBP + -0x4],0x2
0043b0ab  JMP 0x0043b0bd
0043b0ad  MOV dword ptr [EBP + -0x4],0x3
0043b0b4  JMP 0x0043b0bd
0043b0b6  MOV dword ptr [EBP + -0x4],0x6
0043b0bd  JMP 0x0043b172
0043b0c2  XOR ECX,ECX
0043b0c4  SHL ECX,0x2
0043b0c7  MOV EDX,dword ptr [EBP + -0x20]
0043b0ca  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xacc]
0043b0d1  MOV dword ptr [EBP + -0x10],EAX
0043b0d4  MOV ECX,0x1
0043b0d9  SHL ECX,0x2
0043b0dc  MOV EDX,dword ptr [EBP + -0x20]
0043b0df  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xacc]
0043b0e6  MOV dword ptr [EBP + -0x14],EAX
0043b0e9  MOV ECX,dword ptr [EBP + -0x10]
0043b0ec  ADD ECX,dword ptr [EBP + -0x14]
0043b0ef  MOV dword ptr [EBP + -0x30],ECX
0043b0f2  MOV EDX,dword ptr [EBP + -0x30]
0043b0f5  SUB EDX,0x2
0043b0f8  MOV dword ptr [EBP + -0x30],EDX
0043b0fb  CMP dword ptr [EBP + -0x30],0xa
0043b0ff  JA 0x0043b122
0043b101  MOV EAX,dword ptr [EBP + -0x30]
0043b104  MOVZX ECX,byte ptr [EAX + 0x43b214]
0043b10b  JMP dword ptr [ECX*0x4 + 0x43b208]
0043b112  MOV dword ptr [EBP + -0x4],0x1
0043b119  JMP 0x0043b122
0043b11b  MOV dword ptr [EBP + -0x4],0x1
0043b122  JMP 0x0043b172
0043b124  XOR EDX,EDX
0043b126  SHL EDX,0x2
0043b129  MOV EAX,dword ptr [EBP + -0x20]
0043b12c  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0043b133  MOV dword ptr [EBP + -0x18],ECX
0043b136  MOV EDX,0x1
0043b13b  SHL EDX,0x2
0043b13e  MOV EAX,dword ptr [EBP + -0x20]
0043b141  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0043b148  MOV dword ptr [EBP + -0x1c],ECX
0043b14b  MOV EDX,dword ptr [EBP + -0x18]
0043b14e  ADD EDX,dword ptr [EBP + -0x1c]
0043b151  MOV dword ptr [EBP + -0x34],EDX
0043b154  CMP dword ptr [EBP + -0x34],0x2
0043b158  JZ 0x0043b162
0043b15a  CMP dword ptr [EBP + -0x34],0xc
0043b15e  JZ 0x0043b162
0043b160  JMP 0x0043b16b
0043b162  MOV dword ptr [EBP + -0x4],0x1
0043b169  JMP 0x0043b172
0043b16b  MOV dword ptr [EBP + -0x4],0x1
0043b172  MOV EAX,dword ptr [EBP + -0x4]
0043b175  MOV ESP,EBP
0043b177  POP EBP
0043b178  RET 0x4
