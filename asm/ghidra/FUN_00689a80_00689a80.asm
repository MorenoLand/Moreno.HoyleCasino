; FUN_00689a80  00689a80
00689a80  PUSH EBP
00689a81  MOV EBP,ESP
00689a83  SUB ESP,0x28
00689a86  MOV dword ptr [EBP + -0x1c],ECX
00689a89  MOV EAX,dword ptr [EBP + -0x1c]
00689a8c  MOV ECX,dword ptr [EAX + 0x8]
00689a8f  MOV dword ptr [EBP + -0x8],ECX
00689a92  MOV EDX,dword ptr [EBP + -0x8]
00689a95  MOV dword ptr [EBP + -0x4],EDX
00689a98  CMP dword ptr [EBP + -0x4],0x0
00689a9c  JZ 0x00689ab1
00689a9e  PUSH 0x1
00689aa0  MOV EAX,dword ptr [EBP + -0x4]
00689aa3  MOV EDX,dword ptr [EAX]
00689aa5  MOV ECX,dword ptr [EBP + -0x4]
00689aa8  MOV EAX,dword ptr [EDX]
00689aaa  CALL EAX
00689aac  MOV dword ptr [EBP + -0x20],EAX
00689aaf  JMP 0x00689ab8
00689ab1  MOV dword ptr [EBP + -0x20],0x0
00689ab8  MOV ECX,dword ptr [EBP + -0x1c]
00689abb  MOV EDX,dword ptr [ECX + 0xc]
00689abe  MOV dword ptr [EBP + -0x10],EDX
00689ac1  MOV EAX,dword ptr [EBP + -0x10]
00689ac4  MOV dword ptr [EBP + -0xc],EAX
00689ac7  CMP dword ptr [EBP + -0xc],0x0
00689acb  JZ 0x00689ae0
00689acd  PUSH 0x1
00689acf  MOV ECX,dword ptr [EBP + -0xc]
00689ad2  MOV EDX,dword ptr [ECX]
00689ad4  MOV ECX,dword ptr [EBP + -0xc]
00689ad7  MOV EAX,dword ptr [EDX]
00689ad9  CALL EAX
00689adb  MOV dword ptr [EBP + -0x24],EAX
00689ade  JMP 0x00689ae7
00689ae0  MOV dword ptr [EBP + -0x24],0x0
00689ae7  MOV ECX,dword ptr [EBP + -0x1c]
00689aea  MOV EDX,dword ptr [ECX + 0x14]
00689aed  MOV dword ptr [EBP + -0x18],EDX
00689af0  MOV EAX,dword ptr [EBP + -0x18]
00689af3  MOV dword ptr [EBP + -0x14],EAX
00689af6  CMP dword ptr [EBP + -0x14],0x0
00689afa  JZ 0x00689b0f
00689afc  PUSH 0x1
00689afe  MOV ECX,dword ptr [EBP + -0x14]
00689b01  MOV EDX,dword ptr [ECX]
00689b03  MOV ECX,dword ptr [EBP + -0x14]
00689b06  MOV EAX,dword ptr [EDX]
00689b08  CALL EAX
00689b0a  MOV dword ptr [EBP + -0x28],EAX
00689b0d  JMP 0x00689b16
00689b0f  MOV dword ptr [EBP + -0x28],0x0
00689b16  MOV ECX,dword ptr [EBP + -0x1c]
00689b19  CALL 0x00625100
00689b1e  MOV ESP,EBP
00689b20  POP EBP
00689b21  RET
