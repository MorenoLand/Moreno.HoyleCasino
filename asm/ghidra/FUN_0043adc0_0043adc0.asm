; FUN_0043adc0  0043adc0
0043adc0  PUSH EBP
0043adc1  MOV EBP,ESP
0043adc3  SUB ESP,0x34
0043adc6  MOV dword ptr [EBP + -0x20],ECX
0043adc9  MOV EAX,dword ptr [EBP + 0x8]
0043adcc  MOV ECX,dword ptr [EAX*0x8 + 0x713230]
0043add3  MOV dword ptr [EBP + -0x4],ECX
0043add6  MOV EDX,dword ptr [EBP + 0x8]
0043add9  MOV dword ptr [EBP + -0x24],EDX
0043addc  MOV EAX,dword ptr [EBP + -0x24]
0043addf  SUB EAX,0x1
0043ade2  MOV dword ptr [EBP + -0x24],EAX
0043ade5  CMP dword ptr [EBP + -0x24],0x3c
0043ade9  JA 0x0043af42
0043adef  MOV ECX,dword ptr [EBP + -0x24]
0043adf2  MOVZX EDX,byte ptr [ECX + 0x43af60]
0043adf9  JMP dword ptr [EDX*0x4 + 0x43af4c]
0043ae00  MOV EAX,dword ptr [EBP + -0x8]
0043ae03  MOV dword ptr [EBP + -0x28],EAX
0043ae06  MOV ECX,dword ptr [EBP + -0x20]
0043ae09  MOV EDX,dword ptr [ECX + 0xac4]
0043ae0f  MOV dword ptr [EBP + -0x28],EDX
0043ae12  MOV EAX,dword ptr [EBP + -0x28]
0043ae15  SUB EAX,0x4
0043ae18  MOV dword ptr [EBP + -0x28],EAX
0043ae1b  CMP dword ptr [EBP + -0x28],0x6
0043ae1f  JA 0x0043ae44
0043ae21  MOV ECX,dword ptr [EBP + -0x28]
0043ae24  JMP dword ptr [ECX*0x4 + 0x43afa0]
0043ae2b  MOV dword ptr [EBP + -0x4],0x2
0043ae32  JMP 0x0043ae44
0043ae34  MOV dword ptr [EBP + -0x4],0x3
0043ae3b  JMP 0x0043ae44
0043ae3d  MOV dword ptr [EBP + -0x4],0x6
0043ae44  JMP 0x0043af42
0043ae49  MOV EDX,dword ptr [EBP + -0xc]
0043ae4c  MOV dword ptr [EBP + -0x2c],EDX
0043ae4f  MOV EAX,dword ptr [EBP + -0x20]
0043ae52  MOV ECX,dword ptr [EAX + 0xac4]
0043ae58  MOV dword ptr [EBP + -0x2c],ECX
0043ae5b  MOV EDX,dword ptr [EBP + -0x2c]
0043ae5e  SUB EDX,0x4
0043ae61  MOV dword ptr [EBP + -0x2c],EDX
0043ae64  CMP dword ptr [EBP + -0x2c],0x6
0043ae68  JA 0x0043ae8d
0043ae6a  MOV EAX,dword ptr [EBP + -0x2c]
0043ae6d  JMP dword ptr [EAX*0x4 + 0x43afbc]
0043ae74  MOV dword ptr [EBP + -0x4],0x1
0043ae7b  JMP 0x0043ae8d
0043ae7d  MOV dword ptr [EBP + -0x4],0x2
0043ae84  JMP 0x0043ae8d
0043ae86  MOV dword ptr [EBP + -0x4],0x5
0043ae8d  JMP 0x0043af42
0043ae92  XOR ECX,ECX
0043ae94  SHL ECX,0x2
0043ae97  MOV EDX,dword ptr [EBP + -0x20]
0043ae9a  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xacc]
0043aea1  MOV dword ptr [EBP + -0x10],EAX
0043aea4  MOV ECX,0x1
0043aea9  SHL ECX,0x2
0043aeac  MOV EDX,dword ptr [EBP + -0x20]
0043aeaf  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xacc]
0043aeb6  MOV dword ptr [EBP + -0x14],EAX
0043aeb9  MOV ECX,dword ptr [EBP + -0x10]
0043aebc  ADD ECX,dword ptr [EBP + -0x14]
0043aebf  MOV dword ptr [EBP + -0x30],ECX
0043aec2  MOV EDX,dword ptr [EBP + -0x30]
0043aec5  SUB EDX,0x2
0043aec8  MOV dword ptr [EBP + -0x30],EDX
0043aecb  CMP dword ptr [EBP + -0x30],0xa
0043aecf  JA 0x0043aef2
0043aed1  MOV EAX,dword ptr [EBP + -0x30]
0043aed4  MOVZX ECX,byte ptr [EAX + 0x43afe4]
0043aedb  JMP dword ptr [ECX*0x4 + 0x43afd8]
0043aee2  MOV dword ptr [EBP + -0x4],0x1e
0043aee9  JMP 0x0043aef2
0043aeeb  MOV dword ptr [EBP + -0x4],0xf
0043aef2  JMP 0x0043af42
0043aef4  XOR EDX,EDX
0043aef6  SHL EDX,0x2
0043aef9  MOV EAX,dword ptr [EBP + -0x20]
0043aefc  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0043af03  MOV dword ptr [EBP + -0x18],ECX
0043af06  MOV EDX,0x1
0043af0b  SHL EDX,0x2
0043af0e  MOV EAX,dword ptr [EBP + -0x20]
0043af11  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0043af18  MOV dword ptr [EBP + -0x1c],ECX
0043af1b  MOV EDX,dword ptr [EBP + -0x18]
0043af1e  ADD EDX,dword ptr [EBP + -0x1c]
0043af21  MOV dword ptr [EBP + -0x34],EDX
0043af24  CMP dword ptr [EBP + -0x34],0x2
0043af28  JZ 0x0043af32
0043af2a  CMP dword ptr [EBP + -0x34],0xc
0043af2e  JZ 0x0043af32
0043af30  JMP 0x0043af3b
0043af32  MOV dword ptr [EBP + -0x4],0x2
0043af39  JMP 0x0043af42
0043af3b  MOV dword ptr [EBP + -0x4],0x1
0043af42  MOV EAX,dword ptr [EBP + -0x4]
0043af45  MOV ESP,EBP
0043af47  POP EBP
0043af48  RET 0x4
