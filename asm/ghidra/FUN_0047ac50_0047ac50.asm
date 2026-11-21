; FUN_0047ac50  0047ac50
0047ac50  PUSH EBP
0047ac51  MOV EBP,ESP
0047ac53  SUB ESP,0x44
0047ac56  PUSH ESI
0047ac57  MOV dword ptr [EBP + -0x40],ECX
0047ac5a  MOV ECX,dword ptr [0x00791eb8]
0047ac60  CALL 0x005da7b0
0047ac65  MOVZX EAX,AL
0047ac68  TEST EAX,EAX
0047ac6a  JZ 0x0047ac83
0047ac6c  PUSH 0x22c
0047ac71  PUSH 0x6bc694
0047ac76  PUSH 0x6bc6f4
0047ac7b  CALL 0x005e9f20
0047ac80  ADD ESP,0xc
0047ac83  MOV dword ptr [EBP + -0x4],0x0
0047ac8a  JMP 0x0047ac95
0047ac8c  MOV EDX,dword ptr [EBP + -0x4]
0047ac8f  ADD EDX,0x1
0047ac92  MOV dword ptr [EBP + -0x4],EDX
0047ac95  MOV ECX,dword ptr [0x00791364]
0047ac9b  CALL 0x0047f950
0047aca0  CMP dword ptr [EBP + -0x4],EAX
0047aca3  JGE 0x0047ae19
0047aca9  MOV EAX,dword ptr [EBP + -0x4]
0047acac  PUSH EAX
0047acad  CALL 0x005dcb00
0047acb2  ADD ESP,0x4
0047acb5  MOV dword ptr [EBP + -0x1c],EAX
0047acb8  MOV ECX,dword ptr [EBP + -0x1c]
0047acbb  CALL 0x0063aac0
0047acc0  MOV ECX,dword ptr [EAX]
0047acc2  MOV dword ptr [EBP + -0x18],ECX
0047acc5  XOR EDX,EDX
0047acc7  CMP dword ptr [EBP + -0x18],0x0
0047accb  SETZ DL
0047acce  MOVZX EAX,DL
0047acd1  TEST EAX,EAX
0047acd3  JNZ 0x0047ae14
0047acd9  MOV ECX,dword ptr [EBP + -0x4]
0047acdc  PUSH ECX
0047acdd  CALL 0x005dcb00
0047ace2  ADD ESP,0x4
0047ace5  MOV ECX,EAX
0047ace7  CALL 0x005d5a50
0047acec  MOV ESI,EAX
0047acee  MOV ECX,dword ptr [EBP + -0x40]
0047acf1  CALL 0x0047bc20
0047acf6  CMP ESI,EAX
0047acf8  JGE 0x0047ae14
0047acfe  MOV EDX,dword ptr [0x0162ee84]
0047ad04  MOV AL,byte ptr [EDX + 0x25]
0047ad07  MOV byte ptr [EBP + -0x1d],AL
0047ad0a  MOVZX ECX,byte ptr [EBP + -0x1d]
0047ad0e  TEST ECX,ECX
0047ad10  JNZ 0x0047ad7c
0047ad12  MOV EDX,dword ptr [EBP + -0x4]
0047ad15  PUSH EDX
0047ad16  CALL 0x005dcb00
0047ad1b  ADD ESP,0x4
0047ad1e  MOV dword ptr [EBP + -0x2c],EAX
0047ad21  MOV ECX,dword ptr [EBP + -0x2c]
0047ad24  CALL 0x0063aac0
0047ad29  MOV EAX,dword ptr [EAX]
0047ad2b  MOV dword ptr [EBP + -0x24],EAX
0047ad2e  CMP dword ptr [EBP + -0x24],0x2
0047ad32  JZ 0x0047ad50
0047ad34  MOV ECX,dword ptr [EBP + -0x2c]
0047ad37  CALL 0x0063aac0
0047ad3c  MOV ECX,dword ptr [EAX]
0047ad3e  MOV dword ptr [EBP + -0x28],ECX
0047ad41  CMP dword ptr [EBP + -0x28],0x3
0047ad45  JZ 0x0047ad50
0047ad47  MOV dword ptr [EBP + -0x44],0x0
0047ad4e  JMP 0x0047ad57
0047ad50  MOV dword ptr [EBP + -0x44],0x1
0047ad57  MOVZX EDX,byte ptr [EBP + -0x44]
0047ad5b  TEST EDX,EDX
0047ad5d  JZ 0x0047ad7c
0047ad5f  MOV EAX,dword ptr [EBP + -0x4]
0047ad62  PUSH EAX
0047ad63  CALL 0x005dcb00
0047ad68  ADD ESP,0x4
0047ad6b  PUSH EAX
0047ad6c  MOV ECX,dword ptr [0x00791eb8]
0047ad72  CALL 0x005dbb70
0047ad77  JMP 0x0047ae14
0047ad7c  MOV ECX,dword ptr [EBP + -0x4]
0047ad7f  PUSH ECX
0047ad80  MOV ECX,dword ptr [0x00791eb8]
0047ad86  CALL 0x005d9570
0047ad8b  MOV dword ptr [EBP + -0x8],EAX
0047ad8e  MOV EDX,dword ptr [EBP + -0x4]
0047ad91  PUSH EDX
0047ad92  CALL 0x005dcb00
0047ad97  ADD ESP,0x4
0047ad9a  PUSH EAX
0047ad9b  MOV EAX,[0x00791eb8]
0047ada0  MOV EDX,dword ptr [EAX]
0047ada2  MOV ECX,dword ptr [0x00791eb8]
0047ada8  MOV EAX,dword ptr [EDX + 0x264]
0047adae  CALL EAX
0047adb0  MOV dword ptr [EBP + -0xc],0x0
0047adb7  MOV dword ptr [EBP + -0x10],0x0
0047adbe  JMP 0x0047adc9
0047adc0  MOV ECX,dword ptr [EBP + -0x10]
0047adc3  ADD ECX,0x1
0047adc6  MOV dword ptr [EBP + -0x10],ECX
0047adc9  MOV ECX,dword ptr [EBP + -0x40]
0047adcc  CALL 0x0047f950
0047add1  CMP dword ptr [EBP + -0x10],EAX
0047add4  JGE 0x0047ae14
0047add6  MOV EDX,dword ptr [EBP + -0x10]
0047add9  PUSH EDX
0047adda  MOV ECX,dword ptr [EBP + -0x40]
0047addd  CALL 0x0047e390
0047ade2  MOV dword ptr [EBP + -0xc],EAX
0047ade5  MOV EAX,dword ptr [EBP + -0xc]
0047ade8  MOV ECX,dword ptr [EAX + 0x4]
0047adeb  PUSH ECX
0047adec  CALL 0x005dcb00
0047adf1  ADD ESP,0x4
0047adf4  MOV dword ptr [EBP + -0x30],EAX
0047adf7  MOV EDX,dword ptr [EBP + -0x30]
0047adfa  MOV EAX,dword ptr [EDX + 0x8]
0047adfd  MOV dword ptr [EBP + -0x34],EAX
0047ae00  MOV ECX,dword ptr [EBP + -0x34]
0047ae03  CMP ECX,dword ptr [EBP + -0x8]
0047ae06  JNZ 0x0047ae12
0047ae08  MOV ECX,dword ptr [EBP + -0xc]
0047ae0b  CALL 0x004c6550
0047ae10  JMP 0x0047ae14
0047ae12  JMP 0x0047adc0
0047ae14  JMP 0x0047ac8c
0047ae19  MOV EDX,dword ptr [0x0162ee84]
0047ae1f  MOV AL,byte ptr [EDX + 0x25]
0047ae22  MOV byte ptr [EBP + -0x35],AL
0047ae25  MOVZX ECX,byte ptr [EBP + -0x35]
0047ae29  TEST ECX,ECX
0047ae2b  JZ 0x0047ae5a
0047ae2d  MOV ECX,dword ptr [EBP + -0x40]
0047ae30  CALL 0x004798c0
0047ae35  MOV dword ptr [EBP + -0x14],EAX
0047ae38  CMP dword ptr [EBP + -0x14],0x0
0047ae3c  JZ 0x0047ae5a
0047ae3e  MOV EDX,dword ptr [EBP + -0x14]
0047ae41  MOV EAX,dword ptr [EDX + 0x4]
0047ae44  PUSH EAX
0047ae45  CALL 0x005dcb00
0047ae4a  ADD ESP,0x4
0047ae4d  MOV dword ptr [EBP + -0x3c],EAX
0047ae50  MOV ECX,dword ptr [EBP + -0x3c]
0047ae53  MOV byte ptr [ECX + 0x4a1],0x1
0047ae5a  POP ESI
0047ae5b  MOV ESP,EBP
0047ae5d  POP EBP
0047ae5e  RET
