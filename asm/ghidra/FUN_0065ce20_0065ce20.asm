; FUN_0065ce20  0065ce20
0065ce20  PUSH EBP
0065ce21  MOV EBP,ESP
0065ce23  SUB ESP,0x14
0065ce26  MOV dword ptr [EBP + -0x14],ECX
0065ce29  MOV EAX,dword ptr [EBP + -0x14]
0065ce2c  MOV ECX,dword ptr [EAX + 0x8c]
0065ce32  CMP dword ptr [ECX + 0x1bc],0x0
0065ce39  JZ 0x0065ce75
0065ce3b  MOV ECX,dword ptr [EBP + -0x14]
0065ce3e  CALL 0x00615260
0065ce43  PUSH EAX
0065ce44  MOV ECX,dword ptr [EBP + -0x14]
0065ce47  ADD ECX,0x74
0065ce4a  CALL 0x006639a0
0065ce4f  PUSH EAX
0065ce50  MOV ECX,dword ptr [EBP + -0x14]
0065ce53  CALL 0x00615260
0065ce58  PUSH EAX
0065ce59  MOV EDX,dword ptr [EBP + -0x14]
0065ce5c  MOV EAX,dword ptr [EDX + 0x8c]
0065ce62  MOV ECX,dword ptr [EBP + -0x14]
0065ce65  MOV ECX,dword ptr [ECX + 0x8c]
0065ce6b  MOV EDX,dword ptr [EAX]
0065ce6d  MOV EAX,dword ptr [EDX + 0x88]
0065ce73  CALL EAX
0065ce75  PUSH 0x1
0065ce77  MOV ECX,dword ptr [EBP + -0x14]
0065ce7a  MOV EDX,dword ptr [ECX + 0x70]
0065ce7d  MOV ECX,dword ptr [EDX + 0x20]
0065ce80  CALL 0x00648270
0065ce85  MOV EAX,dword ptr [EBP + -0x14]
0065ce88  MOV ECX,dword ptr [EAX + 0x8c]
0065ce8e  MOVZX EDX,byte ptr [ECX + 0x1c1]
0065ce95  TEST EDX,EDX
0065ce97  JZ 0x0065ceeb
0065ce99  MOV ECX,dword ptr [EBP + -0x14]
0065ce9c  CALL 0x00615260
0065cea1  MOV ECX,dword ptr [EBP + -0x14]
0065cea4  MOV EDX,dword ptr [ECX + 0x8c]
0065ceaa  MOV byte ptr [EDX + 0x1c3],AL
0065ceb0  MOV EAX,dword ptr [EBP + -0x14]
0065ceb3  MOV ECX,dword ptr [EAX + 0x70]
0065ceb6  MOV dword ptr [EBP + -0x4],ECX
0065ceb9  MOV ECX,dword ptr [EBP + -0x4]
0065cebc  CALL 0x0063aac0
0065cec1  MOV dword ptr [EAX],0x2
0065cec7  MOV ECX,dword ptr [EBP + -0x14]
0065ceca  CALL 0x00615260
0065cecf  MOV dword ptr [EBP + -0xc],EAX
0065ced2  MOV EDX,dword ptr [EBP + -0x14]
0065ced5  MOV EAX,dword ptr [EDX + 0x70]
0065ced8  MOV dword ptr [EBP + -0x8],EAX
0065cedb  MOV ECX,dword ptr [EBP + -0x8]
0065cede  CALL 0x0063aac0
0065cee3  MOV ECX,dword ptr [EBP + -0xc]
0065cee6  MOV dword ptr [EAX + 0x54],ECX
0065cee9  JMP 0x0065cf3d
0065ceeb  MOV ECX,dword ptr [EBP + -0x14]
0065ceee  CALL 0x00615260
0065cef3  MOV EDX,dword ptr [EBP + -0x14]
0065cef6  MOV ECX,dword ptr [EDX + 0x8c]
0065cefc  MOV byte ptr [ECX + 0x1c2],AL
0065cf02  MOV EDX,dword ptr [EBP + -0x14]
0065cf05  MOV EAX,dword ptr [EDX + 0x70]
0065cf08  MOV dword ptr [EBP + -0x10],EAX
0065cf0b  MOV ECX,dword ptr [EBP + -0x10]
0065cf0e  CALL 0x0063aac0
0065cf13  MOV dword ptr [EAX],0x3
0065cf19  MOV ECX,dword ptr [EBP + -0x14]
0065cf1c  MOV EDX,dword ptr [ECX + 0x70]
0065cf1f  MOV EAX,dword ptr [EDX + 0x20]
0065cf22  MOV ECX,dword ptr [EAX + 0x14]
0065cf25  ADD ECX,0x10
0065cf28  PUSH ECX
0065cf29  MOV ECX,dword ptr [EBP + -0x14]
0065cf2c  CALL 0x00615260
0065cf31  PUSH EAX
0065cf32  MOV ECX,dword ptr [EBP + -0x14]
0065cf35  ADD ECX,0x74
0065cf38  CALL 0x00663c70
0065cf3d  PUSH 0x0
0065cf3f  PUSH 0x0
0065cf41  MOV EDX,dword ptr [EBP + -0x14]
0065cf44  MOV EAX,dword ptr [EDX + 0x70]
0065cf47  MOV ECX,dword ptr [EAX + 0x20]
0065cf4a  CALL 0x006464d0
0065cf4f  MOV ECX,dword ptr [EBP + -0x14]
0065cf52  MOV ECX,dword ptr [ECX + 0x8c]
0065cf58  CALL 0x0065c300
0065cf5d  MOV EDX,dword ptr [EBP + -0x14]
0065cf60  MOV EAX,dword ptr [EDX + 0x8c]
0065cf66  MOV ECX,dword ptr [EBP + -0x14]
0065cf69  MOV ECX,dword ptr [ECX + 0x8c]
0065cf6f  MOV EDX,dword ptr [EAX]
0065cf71  MOV EAX,dword ptr [EDX + 0x90]
0065cf77  CALL EAX
0065cf79  MOV ESP,EBP
0065cf7b  POP EBP
0065cf7c  RET
