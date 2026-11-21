; FUN_004fe120  004fe120
004fe120  PUSH EBP
004fe121  MOV EBP,ESP
004fe123  SUB ESP,0xc
004fe126  MOV dword ptr [EBP + -0x4],ECX
004fe129  CMP dword ptr [EBP + 0x8],0x30e796
004fe130  JL 0x004fe144
004fe132  CMP dword ptr [EBP + 0x8],0x30e799
004fe139  JG 0x004fe144
004fe13b  MOV dword ptr [EBP + -0x8],0x1
004fe142  JMP 0x004fe14b
004fe144  MOV dword ptr [EBP + -0x8],0x0
004fe14b  MOV EAX,[0x007947e0]
004fe150  MOV CL,byte ptr [EBP + -0x8]
004fe153  MOV byte ptr [EAX + 0x4f34],CL
004fe159  MOV EDX,dword ptr [EBP + 0x8]
004fe15c  MOV dword ptr [EBP + -0xc],EDX
004fe15f  MOV EAX,dword ptr [EBP + -0xc]
004fe162  SUB EAX,0x30e792
004fe167  MOV dword ptr [EBP + -0xc],EAX
004fe16a  CMP dword ptr [EBP + -0xc],0x7
004fe16e  JA 0x004fe196
004fe170  MOV ECX,dword ptr [EBP + -0xc]
004fe173  JMP dword ptr [ECX*0x4 + 0x4fe1a4]
004fe17a  MOV EAX,0x5
004fe17f  JMP 0x004fe19b
004fe181  MOV EAX,0x19
004fe186  JMP 0x004fe19b
004fe188  MOV EAX,0xfa
004fe18d  JMP 0x004fe19b
004fe18f  MOV EAX,0x3e8
004fe194  JMP 0x004fe19b
004fe196  MOV EAX,0x5
004fe19b  MOV ESP,EBP
004fe19d  POP EBP
004fe19e  RET 0x4
