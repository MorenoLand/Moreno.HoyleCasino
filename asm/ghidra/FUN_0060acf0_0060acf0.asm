; FUN_0060acf0  0060acf0
0060acf0  PUSH EBP
0060acf1  MOV EBP,ESP
0060acf3  SUB ESP,0x18
0060acf6  MOV dword ptr [EBP + -0x14],ECX
0060acf9  MOV EAX,dword ptr [EBP + -0x14]
0060acfc  MOVZX ECX,byte ptr [EAX + 0x9]
0060ad00  TEST ECX,ECX
0060ad02  JZ 0x0060ad0f
0060ad04  MOV EDX,dword ptr [EBP + -0x14]
0060ad07  MOVZX EAX,byte ptr [EDX + 0x8]
0060ad0b  TEST EAX,EAX
0060ad0d  JNZ 0x0060ad14
0060ad0f  JMP 0x0060af47
0060ad14  MOV dword ptr [EBP + -0x4],0x0
0060ad1b  JMP 0x0060ad26
0060ad1d  MOV ECX,dword ptr [EBP + -0x4]
0060ad20  ADD ECX,0x1
0060ad23  MOV dword ptr [EBP + -0x4],ECX
0060ad26  CMP dword ptr [EBP + -0x4],0x3
0060ad2a  JGE 0x0060af47
0060ad30  MOV EDX,dword ptr [EBP + -0x4]
0060ad33  IMUL EDX,EDX,0x74
0060ad36  CMP dword ptr [EDX + 0x796d28],0x0
0060ad3d  JZ 0x0060ad78
0060ad3f  MOV EAX,dword ptr [EBP + -0x4]
0060ad42  IMUL EAX,EAX,0x74
0060ad45  MOV ECX,dword ptr [EAX + 0x796d28]
0060ad4b  CALL 0x0062d470
0060ad50  MOV ECX,dword ptr [EBP + -0x4]
0060ad53  PUSH ECX
0060ad54  MOV ECX,dword ptr [EBP + -0x14]
0060ad57  CALL 0x0060a870
0060ad5c  MOVZX EDX,AL
0060ad5f  TEST EDX,EDX
0060ad61  JNZ 0x0060ad76
0060ad63  MOV EAX,dword ptr [EBP + -0x4]
0060ad66  PUSH EAX
0060ad67  MOV ECX,dword ptr [EBP + -0x14]
0060ad6a  CALL 0x0060a540
0060ad6f  MOVZX ECX,AL
0060ad72  TEST ECX,ECX
0060ad74  JZ 0x0060ad78
0060ad76  JMP 0x0060ad1d
0060ad78  MOV EDX,dword ptr [EBP + -0x4]
0060ad7b  IMUL EDX,EDX,0x74
0060ad7e  MOVZX EAX,byte ptr [EDX + 0x796d3c]
0060ad85  TEST EAX,EAX
0060ad87  JZ 0x0060af42
0060ad8d  MOV ECX,dword ptr [EBP + -0x4]
0060ad90  IMUL ECX,ECX,0x74
0060ad93  CMP dword ptr [ECX + 0x796d28],0x0
0060ad9a  JZ 0x0060ae05
0060ad9c  MOV EDX,dword ptr [EBP + -0x4]
0060ad9f  IMUL EDX,EDX,0x74
0060ada2  MOV ECX,dword ptr [EDX + 0x796d28]
0060ada8  CALL 0x0062d120
0060adad  MOV EAX,dword ptr [EBP + -0x4]
0060adb0  IMUL EAX,EAX,0x74
0060adb3  MOV ECX,dword ptr [EAX + 0x796d28]
0060adb9  MOV dword ptr [EBP + -0x10],ECX
0060adbc  MOV EDX,dword ptr [EBP + -0x10]
0060adbf  MOV dword ptr [EBP + -0xc],EDX
0060adc2  CMP dword ptr [EBP + -0xc],0x0
0060adc6  JZ 0x0060adee
0060adc8  MOV ECX,dword ptr [EBP + -0xc]
0060adcb  CALL 0x0062d120
0060add0  MOV EAX,0x1
0060add5  AND EAX,0x1
0060add8  JZ 0x0060ade6
0060adda  MOV ECX,dword ptr [EBP + -0xc]
0060addd  PUSH ECX
0060adde  CALL 0x00686cae
0060ade3  ADD ESP,0x4
0060ade6  MOV EDX,dword ptr [EBP + -0xc]
0060ade9  MOV dword ptr [EBP + -0x18],EDX
0060adec  JMP 0x0060adf5
0060adee  MOV dword ptr [EBP + -0x18],0x0
0060adf5  MOV EAX,dword ptr [EBP + -0x4]
0060adf8  IMUL EAX,EAX,0x74
0060adfb  MOV dword ptr [EAX + 0x796d28],0x0
0060ae05  MOV dword ptr [EBP + -0x8],0x0
0060ae0c  JMP 0x0060ae17
0060ae0e  MOV ECX,dword ptr [EBP + -0x8]
0060ae11  ADD ECX,0x1
0060ae14  MOV dword ptr [EBP + -0x8],ECX
0060ae17  MOV EDX,dword ptr [EBP + -0x4]
0060ae1a  IMUL EDX,EDX,0x74
0060ae1d  MOV EAX,dword ptr [EBP + -0x8]
0060ae20  CMP dword ptr [EDX + EAX*0x4 + 0x796d44],-0x1
0060ae28  JZ 0x0060ae2c
0060ae2a  JMP 0x0060ae0e
0060ae2c  CMP dword ptr [EBP + -0x8],0x0
0060ae30  JNZ 0x0060ae52
0060ae32  XOR ECX,ECX
0060ae34  JNZ 0x0060ae4d
0060ae36  PUSH 0x795
0060ae3b  PUSH 0x6d7e6c
0060ae40  PUSH 0x6b2f58
0060ae45  CALL 0x005e9f20
0060ae4a  ADD ESP,0xc
0060ae4d  JMP 0x0060ad1d
0060ae52  MOV EAX,dword ptr [EBP + -0x4]
0060ae55  IMUL EAX,EAX,0x74
0060ae58  CMP dword ptr [EAX + 0x796d40],-0x1
0060ae5f  JZ 0x0060ae72
0060ae61  MOV ECX,dword ptr [EBP + -0x4]
0060ae64  IMUL ECX,ECX,0x74
0060ae67  MOV EDX,dword ptr [ECX + 0x796d40]
0060ae6d  CMP EDX,dword ptr [EBP + -0x8]
0060ae70  JL 0x0060ae90
0060ae72  PUSH 0x1
0060ae74  MOV EAX,dword ptr [EBP + -0x4]
0060ae77  PUSH EAX
0060ae78  MOV ECX,dword ptr [EBP + -0x14]
0060ae7b  CALL 0x0060ab30
0060ae80  MOV ECX,dword ptr [EBP + -0x4]
0060ae83  IMUL ECX,ECX,0x74
0060ae86  MOV dword ptr [ECX + 0x796d40],0xffffffff
0060ae90  MOV EDX,dword ptr [EBP + -0x4]
0060ae93  IMUL EDX,EDX,0x74
0060ae96  MOV EAX,dword ptr [EDX + 0x796d40]
0060ae9c  ADD EAX,0x1
0060ae9f  MOV ECX,dword ptr [EBP + -0x4]
0060aea2  IMUL ECX,ECX,0x74
0060aea5  MOV dword ptr [ECX + 0x796d40],EAX
0060aeab  MOV EDX,dword ptr [EBP + -0x4]
0060aeae  IMUL EDX,EDX,0x74
0060aeb1  MOV EAX,dword ptr [EDX + 0x796d40]
0060aeb7  CMP EAX,dword ptr [EBP + -0x8]
0060aeba  JL 0x0060aec1
0060aebc  JMP 0x0060af47
0060aec1  MOV ECX,dword ptr [EBP + -0x4]
0060aec4  IMUL ECX,ECX,0x74
0060aec7  FLD float ptr [ECX + 0x796d94]
0060aecd  SUB ESP,0x8
0060aed0  FSTP double ptr [ESP]
0060aed3  MOV EDX,dword ptr [EBP + -0x4]
0060aed6  IMUL EDX,EDX,0x74
0060aed9  MOV EAX,dword ptr [EBP + -0x4]
0060aedc  IMUL EAX,EAX,0x74
0060aedf  MOV ECX,dword ptr [EAX + 0x796d40]
0060aee5  MOV EDX,dword ptr [EDX + ECX*0x4 + 0x796d44]
0060aeec  PUSH EDX
0060aeed  MOV EAX,dword ptr [EBP + -0x4]
0060aef0  IMUL EAX,EAX,0x74
0060aef3  MOV ECX,dword ptr [EAX + 0x796d40]
0060aef9  PUSH ECX
0060aefa  MOV EDX,dword ptr [EBP + -0x4]
0060aefd  IMUL EDX,EDX,0x74
0060af00  MOV EAX,dword ptr [EDX + 0x796d38]
0060af06  PUSH EAX
0060af07  PUSH 0x6d80a0
0060af0c  CALL 0x0062fde0
0060af11  ADD ESP,0x18
0060af14  MOV ECX,dword ptr [EBP + -0x4]
0060af17  IMUL ECX,ECX,0x74
0060af1a  PUSH ECX
0060af1b  FLD float ptr [ECX + 0x796d98]
0060af21  FSTP float ptr [ESP]
0060af24  MOV EDX,dword ptr [EBP + -0x4]
0060af27  IMUL EDX,EDX,0x74
0060af2a  PUSH ECX
0060af2b  FLD float ptr [EDX + 0x796d94]
0060af31  FSTP float ptr [ESP]
0060af34  PUSH 0x1
0060af36  MOV EAX,dword ptr [EBP + -0x4]
0060af39  PUSH EAX
0060af3a  MOV ECX,dword ptr [EBP + -0x14]
0060af3d  CALL 0x0060b0b0
0060af42  JMP 0x0060ad1d
0060af47  MOV ESP,EBP
0060af49  POP EBP
0060af4a  RET
