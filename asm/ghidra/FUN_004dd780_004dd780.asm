; FUN_004dd780  004dd780
004dd780  PUSH EBP
004dd781  MOV EBP,ESP
004dd783  SUB ESP,0x1c
004dd786  MOV dword ptr [EBP + -0x1c],ECX
004dd789  MOV dword ptr [EBP + -0x18],0x0
004dd790  MOV ECX,dword ptr [EBP + 0xc]
004dd793  CALL 0x00463e50
004dd798  MOV dword ptr [EBP + -0x10],EAX
004dd79b  CMP dword ptr [EBP + -0x10],0x0
004dd79f  JL 0x004dd7a7
004dd7a1  CMP dword ptr [EBP + -0x10],0x34
004dd7a5  JL 0x004dd7c2
004dd7a7  XOR EAX,EAX
004dd7a9  JNZ 0x004dd7c2
004dd7ab  PUSH 0x1c39
004dd7b0  PUSH 0x6bf384
004dd7b5  PUSH 0x6b2b64
004dd7ba  CALL 0x005e9f20
004dd7bf  ADD ESP,0xc
004dd7c2  MOV EAX,dword ptr [EBP + -0x10]
004dd7c5  CDQ
004dd7c6  MOV ECX,0xd
004dd7cb  IDIV ECX
004dd7cd  MOV dword ptr [EBP + -0x4],EAX
004dd7d0  MOV EAX,dword ptr [EBP + -0x10]
004dd7d3  CDQ
004dd7d4  MOV ECX,0xd
004dd7d9  IDIV ECX
004dd7db  MOV dword ptr [EBP + -0x14],EDX
004dd7de  MOV dword ptr [EBP + -0x8],0x0
004dd7e5  CMP dword ptr [EBP + -0x4],0x0
004dd7e9  JNZ 0x004dd7f6
004dd7eb  MOV EDX,dword ptr [0x0079076c]
004dd7f1  MOV dword ptr [EBP + -0x8],EDX
004dd7f4  JMP 0x004dd826
004dd7f6  CMP dword ptr [EBP + -0x4],0x1
004dd7fa  JNZ 0x004dd806
004dd7fc  MOV EAX,[0x00790770]
004dd801  MOV dword ptr [EBP + -0x8],EAX
004dd804  JMP 0x004dd826
004dd806  CMP dword ptr [EBP + -0x4],0x2
004dd80a  JNZ 0x004dd817
004dd80c  MOV ECX,dword ptr [0x00790764]
004dd812  MOV dword ptr [EBP + -0x8],ECX
004dd815  JMP 0x004dd826
004dd817  CMP dword ptr [EBP + -0x4],0x3
004dd81b  JNZ 0x004dd826
004dd81d  MOV EDX,dword ptr [0x00790754]
004dd823  MOV dword ptr [EBP + -0x8],EDX
004dd826  MOV dword ptr [EBP + -0xc],0x0
004dd82d  CMP dword ptr [EBP + -0x14],0x0
004dd831  JNZ 0x004dd840
004dd833  MOV EAX,[0x007907a4]
004dd838  MOV dword ptr [EBP + -0xc],EAX
004dd83b  JMP 0x004dd912
004dd840  CMP dword ptr [EBP + -0x14],0x1
004dd844  JNZ 0x004dd854
004dd846  MOV ECX,dword ptr [0x00790758]
004dd84c  MOV dword ptr [EBP + -0xc],ECX
004dd84f  JMP 0x004dd912
004dd854  CMP dword ptr [EBP + -0x14],0x2
004dd858  JNZ 0x004dd868
004dd85a  MOV EDX,dword ptr [0x00790768]
004dd860  MOV dword ptr [EBP + -0xc],EDX
004dd863  JMP 0x004dd912
004dd868  CMP dword ptr [EBP + -0x14],0x3
004dd86c  JNZ 0x004dd87b
004dd86e  MOV EAX,[0x00790790]
004dd873  MOV dword ptr [EBP + -0xc],EAX
004dd876  JMP 0x004dd912
004dd87b  CMP dword ptr [EBP + -0x14],0x4
004dd87f  JNZ 0x004dd88f
004dd881  MOV ECX,dword ptr [0x00790750]
004dd887  MOV dword ptr [EBP + -0xc],ECX
004dd88a  JMP 0x004dd912
004dd88f  CMP dword ptr [EBP + -0x14],0x5
004dd893  JNZ 0x004dd8a0
004dd895  MOV EDX,dword ptr [0x0079079c]
004dd89b  MOV dword ptr [EBP + -0xc],EDX
004dd89e  JMP 0x004dd912
004dd8a0  CMP dword ptr [EBP + -0x14],0x6
004dd8a4  JNZ 0x004dd8b0
004dd8a6  MOV EAX,[0x00790760]
004dd8ab  MOV dword ptr [EBP + -0xc],EAX
004dd8ae  JMP 0x004dd912
004dd8b0  CMP dword ptr [EBP + -0x14],0x7
004dd8b4  JNZ 0x004dd8c1
004dd8b6  MOV ECX,dword ptr [0x00790798]
004dd8bc  MOV dword ptr [EBP + -0xc],ECX
004dd8bf  JMP 0x004dd912
004dd8c1  CMP dword ptr [EBP + -0x14],0x8
004dd8c5  JNZ 0x004dd8d2
004dd8c7  MOV EDX,dword ptr [0x00790794]
004dd8cd  MOV dword ptr [EBP + -0xc],EDX
004dd8d0  JMP 0x004dd912
004dd8d2  CMP dword ptr [EBP + -0x14],0x9
004dd8d6  JNZ 0x004dd8e2
004dd8d8  MOV EAX,[0x00790788]
004dd8dd  MOV dword ptr [EBP + -0xc],EAX
004dd8e0  JMP 0x004dd912
004dd8e2  CMP dword ptr [EBP + -0x14],0xa
004dd8e6  JNZ 0x004dd8f3
004dd8e8  MOV ECX,dword ptr [0x00790774]
004dd8ee  MOV dword ptr [EBP + -0xc],ECX
004dd8f1  JMP 0x004dd912
004dd8f3  CMP dword ptr [EBP + -0x14],0xb
004dd8f7  JNZ 0x004dd904
004dd8f9  MOV EDX,dword ptr [0x007907b0]
004dd8ff  MOV dword ptr [EBP + -0xc],EDX
004dd902  JMP 0x004dd912
004dd904  CMP dword ptr [EBP + -0x14],0xc
004dd908  JNZ 0x004dd912
004dd90a  MOV EAX,[0x007907a8]
004dd90f  MOV dword ptr [EBP + -0xc],EAX
004dd912  MOV ECX,dword ptr [EBP + -0x8]
004dd915  PUSH ECX
004dd916  MOV EDX,dword ptr [EBP + -0xc]
004dd919  PUSH EDX
004dd91a  MOV ECX,dword ptr [EBP + 0x8]
004dd91d  CALL 0x00464130
004dd922  MOV EAX,dword ptr [EBP + -0x18]
004dd925  OR EAX,0x1
004dd928  MOV dword ptr [EBP + -0x18],EAX
004dd92b  MOV EAX,dword ptr [EBP + 0x8]
004dd92e  MOV ESP,EBP
004dd930  POP EBP
004dd931  RET 0x8
