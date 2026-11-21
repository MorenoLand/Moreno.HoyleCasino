; FUN_0041a960  0041a960
0041a960  PUSH EBP
0041a961  MOV EBP,ESP
0041a963  SUB ESP,0x68
0041a966  MOV dword ptr [EBP + -0x30],ECX
0041a969  MOV EAX,dword ptr [EBP + 0x8]
0041a96c  PUSH EAX
0041a96d  MOV ECX,dword ptr [EBP + -0x30]
0041a970  CALL 0x004194c0
0041a975  CMP EAX,0x1
0041a978  JLE 0x0041a9ae
0041a97a  MOV ECX,dword ptr [EBP + -0x30]
0041a97d  CALL 0x00418650
0041a982  MOVZX ECX,AL
0041a985  TEST ECX,ECX
0041a987  JZ 0x0041a9a7
0041a989  MOV EDX,dword ptr [EBP + 0x8]
0041a98c  IMUL EDX,EDX,0x118
0041a992  MOV EAX,dword ptr [EBP + -0x30]
0041a995  CMP byte ptr [EAX + EDX*0x1 + 0x118],0x0
0041a99d  SETNZ CL
0041a9a0  MOVZX EDX,CL
0041a9a3  TEST EDX,EDX
0041a9a5  JZ 0x0041a9ae
0041a9a7  XOR AL,AL
0041a9a9  JMP 0x0041adc2
0041a9ae  MOV EAX,dword ptr [EBP + 0x8]
0041a9b1  PUSH EAX
0041a9b2  MOV ECX,dword ptr [EBP + -0x30]
0041a9b5  CALL 0x0041af20
0041a9ba  MOVZX ECX,AL
0041a9bd  TEST ECX,ECX
0041a9bf  JZ 0x0041aa11
0041a9c1  CMP dword ptr [EBP + 0x8],-0x1
0041a9c5  JNZ 0x0041a9d0
0041a9c7  MOV dword ptr [EBP + -0x4],0xffffffff
0041a9ce  JMP 0x0041a9fc
0041a9d0  CMP dword ptr [EBP + 0x8],0x4
0041a9d4  JNZ 0x0041a9df
0041a9d6  MOV dword ptr [EBP + -0x34],0x0
0041a9dd  JMP 0x0041a9f6
0041a9df  MOV EDX,dword ptr [EBP + 0x8]
0041a9e2  IMUL EDX,EDX,0x118
0041a9e8  MOV EAX,dword ptr [EBP + -0x30]
0041a9eb  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041a9f3  MOV dword ptr [EBP + -0x34],ECX
0041a9f6  MOV EDX,dword ptr [EBP + -0x34]
0041a9f9  MOV dword ptr [EBP + -0x4],EDX
0041a9fc  MOV EAX,dword ptr [EBP + -0x4]
0041a9ff  PUSH EAX
0041aa00  MOV ECX,dword ptr [EBP + 0x8]
0041aa03  PUSH ECX
0041aa04  MOV ECX,dword ptr [EBP + -0x30]
0041aa07  CALL 0x00419530
0041aa0c  CMP EAX,0x2
0041aa0f  JLE 0x0041aa18
0041aa11  XOR AL,AL
0041aa13  JMP 0x0041adc2
0041aa18  MOV ECX,dword ptr [EBP + -0x30]
0041aa1b  CALL 0x004186d0
0041aa20  MOVSX EDX,AL
0041aa23  MOV dword ptr [EBP + -0x38],EDX
0041aa26  CMP dword ptr [EBP + -0x38],0x4
0041aa2a  JA 0x0041ada5
0041aa30  MOV EAX,dword ptr [EBP + -0x38]
0041aa33  JMP dword ptr [EAX*0x4 + 0x41adc8]
0041aa3a  MOV AL,0x1
0041aa3c  JMP 0x0041adc2
0041aa41  CMP dword ptr [EBP + 0x8],-0x1
0041aa45  JNZ 0x0041aa50
0041aa47  MOV dword ptr [EBP + -0x8],0xffffffff
0041aa4e  JMP 0x0041aa7c
0041aa50  CMP dword ptr [EBP + 0x8],0x4
0041aa54  JNZ 0x0041aa5f
0041aa56  MOV dword ptr [EBP + -0x3c],0x0
0041aa5d  JMP 0x0041aa76
0041aa5f  MOV ECX,dword ptr [EBP + 0x8]
0041aa62  IMUL ECX,ECX,0x118
0041aa68  MOV EDX,dword ptr [EBP + -0x30]
0041aa6b  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x119]
0041aa73  MOV dword ptr [EBP + -0x3c],EAX
0041aa76  MOV ECX,dword ptr [EBP + -0x3c]
0041aa79  MOV dword ptr [EBP + -0x8],ECX
0041aa7c  MOV EDX,dword ptr [EBP + -0x8]
0041aa7f  PUSH EDX
0041aa80  MOV EAX,dword ptr [EBP + 0x8]
0041aa83  PUSH EAX
0041aa84  MOV ECX,dword ptr [EBP + -0x30]
0041aa87  CALL 0x004197d0
0041aa8c  XOR ECX,ECX
0041aa8e  CMP EAX,0xb
0041aa91  SETZ CL
0041aa94  MOV AL,CL
0041aa96  JMP 0x0041adc2
0041aa9b  CMP dword ptr [EBP + 0x8],-0x1
0041aa9f  JNZ 0x0041aaaa
0041aaa1  MOV dword ptr [EBP + -0xc],0xffffffff
0041aaa8  JMP 0x0041aad6
0041aaaa  CMP dword ptr [EBP + 0x8],0x4
0041aaae  JNZ 0x0041aab9
0041aab0  MOV dword ptr [EBP + -0x40],0x0
0041aab7  JMP 0x0041aad0
0041aab9  MOV EDX,dword ptr [EBP + 0x8]
0041aabc  IMUL EDX,EDX,0x118
0041aac2  MOV EAX,dword ptr [EBP + -0x30]
0041aac5  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041aacd  MOV dword ptr [EBP + -0x40],ECX
0041aad0  MOV EDX,dword ptr [EBP + -0x40]
0041aad3  MOV dword ptr [EBP + -0xc],EDX
0041aad6  MOV EAX,dword ptr [EBP + -0xc]
0041aad9  PUSH EAX
0041aada  MOV ECX,dword ptr [EBP + 0x8]
0041aadd  PUSH ECX
0041aade  MOV ECX,dword ptr [EBP + -0x30]
0041aae1  CALL 0x004197d0
0041aae6  CMP EAX,0xb
0041aae9  JZ 0x0041ab98
0041aaef  CMP dword ptr [EBP + 0x8],-0x1
0041aaf3  JNZ 0x0041aafe
0041aaf5  MOV dword ptr [EBP + -0x10],0xffffffff
0041aafc  JMP 0x0041ab2a
0041aafe  CMP dword ptr [EBP + 0x8],0x4
0041ab02  JNZ 0x0041ab0d
0041ab04  MOV dword ptr [EBP + -0x44],0x0
0041ab0b  JMP 0x0041ab24
0041ab0d  MOV EDX,dword ptr [EBP + 0x8]
0041ab10  IMUL EDX,EDX,0x118
0041ab16  MOV EAX,dword ptr [EBP + -0x30]
0041ab19  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041ab21  MOV dword ptr [EBP + -0x44],ECX
0041ab24  MOV EDX,dword ptr [EBP + -0x44]
0041ab27  MOV dword ptr [EBP + -0x10],EDX
0041ab2a  MOV EAX,dword ptr [EBP + -0x10]
0041ab2d  PUSH EAX
0041ab2e  MOV ECX,dword ptr [EBP + 0x8]
0041ab31  PUSH ECX
0041ab32  MOV ECX,dword ptr [EBP + -0x30]
0041ab35  CALL 0x004197d0
0041ab3a  CMP EAX,0xa
0041ab3d  JZ 0x0041ab98
0041ab3f  CMP dword ptr [EBP + 0x8],-0x1
0041ab43  JNZ 0x0041ab4e
0041ab45  MOV dword ptr [EBP + -0x14],0xffffffff
0041ab4c  JMP 0x0041ab7a
0041ab4e  CMP dword ptr [EBP + 0x8],0x4
0041ab52  JNZ 0x0041ab5d
0041ab54  MOV dword ptr [EBP + -0x48],0x0
0041ab5b  JMP 0x0041ab74
0041ab5d  MOV EDX,dword ptr [EBP + 0x8]
0041ab60  IMUL EDX,EDX,0x118
0041ab66  MOV EAX,dword ptr [EBP + -0x30]
0041ab69  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041ab71  MOV dword ptr [EBP + -0x48],ECX
0041ab74  MOV EDX,dword ptr [EBP + -0x48]
0041ab77  MOV dword ptr [EBP + -0x14],EDX
0041ab7a  MOV EAX,dword ptr [EBP + -0x14]
0041ab7d  PUSH EAX
0041ab7e  MOV ECX,dword ptr [EBP + 0x8]
0041ab81  PUSH ECX
0041ab82  MOV ECX,dword ptr [EBP + -0x30]
0041ab85  CALL 0x004198d0
0041ab8a  CMP EAX,0xa
0041ab8d  JZ 0x0041ab98
0041ab8f  MOV dword ptr [EBP + -0x4c],0x0
0041ab96  JMP 0x0041ab9f
0041ab98  MOV dword ptr [EBP + -0x4c],0x1
0041ab9f  MOV AL,byte ptr [EBP + -0x4c]
0041aba2  JMP 0x0041adc2
0041aba7  CMP dword ptr [EBP + 0x8],-0x1
0041abab  JNZ 0x0041abb6
0041abad  MOV dword ptr [EBP + -0x18],0xffffffff
0041abb4  JMP 0x0041abe2
0041abb6  CMP dword ptr [EBP + 0x8],0x4
0041abba  JNZ 0x0041abc5
0041abbc  MOV dword ptr [EBP + -0x50],0x0
0041abc3  JMP 0x0041abdc
0041abc5  MOV EDX,dword ptr [EBP + 0x8]
0041abc8  IMUL EDX,EDX,0x118
0041abce  MOV EAX,dword ptr [EBP + -0x30]
0041abd1  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041abd9  MOV dword ptr [EBP + -0x50],ECX
0041abdc  MOV EDX,dword ptr [EBP + -0x50]
0041abdf  MOV dword ptr [EBP + -0x18],EDX
0041abe2  MOV EAX,dword ptr [EBP + -0x18]
0041abe5  PUSH EAX
0041abe6  MOV ECX,dword ptr [EBP + 0x8]
0041abe9  PUSH ECX
0041abea  MOV ECX,dword ptr [EBP + -0x30]
0041abed  CALL 0x004197d0
0041abf2  CMP EAX,0xb
0041abf5  JZ 0x0041ad4c
0041abfb  CMP dword ptr [EBP + 0x8],-0x1
0041abff  JNZ 0x0041ac0a
0041ac01  MOV dword ptr [EBP + -0x1c],0xffffffff
0041ac08  JMP 0x0041ac36
0041ac0a  CMP dword ptr [EBP + 0x8],0x4
0041ac0e  JNZ 0x0041ac19
0041ac10  MOV dword ptr [EBP + -0x54],0x0
0041ac17  JMP 0x0041ac30
0041ac19  MOV EDX,dword ptr [EBP + 0x8]
0041ac1c  IMUL EDX,EDX,0x118
0041ac22  MOV EAX,dword ptr [EBP + -0x30]
0041ac25  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041ac2d  MOV dword ptr [EBP + -0x54],ECX
0041ac30  MOV EDX,dword ptr [EBP + -0x54]
0041ac33  MOV dword ptr [EBP + -0x1c],EDX
0041ac36  MOV EAX,dword ptr [EBP + -0x1c]
0041ac39  PUSH EAX
0041ac3a  MOV ECX,dword ptr [EBP + 0x8]
0041ac3d  PUSH ECX
0041ac3e  MOV ECX,dword ptr [EBP + -0x30]
0041ac41  CALL 0x004197d0
0041ac46  CMP EAX,0xa
0041ac49  JZ 0x0041ad4c
0041ac4f  CMP dword ptr [EBP + 0x8],-0x1
0041ac53  JNZ 0x0041ac5e
0041ac55  MOV dword ptr [EBP + -0x20],0xffffffff
0041ac5c  JMP 0x0041ac8a
0041ac5e  CMP dword ptr [EBP + 0x8],0x4
0041ac62  JNZ 0x0041ac6d
0041ac64  MOV dword ptr [EBP + -0x58],0x0
0041ac6b  JMP 0x0041ac84
0041ac6d  MOV EDX,dword ptr [EBP + 0x8]
0041ac70  IMUL EDX,EDX,0x118
0041ac76  MOV EAX,dword ptr [EBP + -0x30]
0041ac79  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041ac81  MOV dword ptr [EBP + -0x58],ECX
0041ac84  MOV EDX,dword ptr [EBP + -0x58]
0041ac87  MOV dword ptr [EBP + -0x20],EDX
0041ac8a  MOV EAX,dword ptr [EBP + -0x20]
0041ac8d  PUSH EAX
0041ac8e  MOV ECX,dword ptr [EBP + 0x8]
0041ac91  PUSH ECX
0041ac92  MOV ECX,dword ptr [EBP + -0x30]
0041ac95  CALL 0x004197d0
0041ac9a  CMP EAX,0x9
0041ac9d  JZ 0x0041ad4c
0041aca3  CMP dword ptr [EBP + 0x8],-0x1
0041aca7  JNZ 0x0041acb2
0041aca9  MOV dword ptr [EBP + -0x24],0xffffffff
0041acb0  JMP 0x0041acde
0041acb2  CMP dword ptr [EBP + 0x8],0x4
0041acb6  JNZ 0x0041acc1
0041acb8  MOV dword ptr [EBP + -0x5c],0x0
0041acbf  JMP 0x0041acd8
0041acc1  MOV EDX,dword ptr [EBP + 0x8]
0041acc4  IMUL EDX,EDX,0x118
0041acca  MOV EAX,dword ptr [EBP + -0x30]
0041accd  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041acd5  MOV dword ptr [EBP + -0x5c],ECX
0041acd8  MOV EDX,dword ptr [EBP + -0x5c]
0041acdb  MOV dword ptr [EBP + -0x24],EDX
0041acde  MOV EAX,dword ptr [EBP + -0x24]
0041ace1  PUSH EAX
0041ace2  MOV ECX,dword ptr [EBP + 0x8]
0041ace5  PUSH ECX
0041ace6  MOV ECX,dword ptr [EBP + -0x30]
0041ace9  CALL 0x004198d0
0041acee  CMP EAX,0xa
0041acf1  JZ 0x0041ad4c
0041acf3  CMP dword ptr [EBP + 0x8],-0x1
0041acf7  JNZ 0x0041ad02
0041acf9  MOV dword ptr [EBP + -0x28],0xffffffff
0041ad00  JMP 0x0041ad2e
0041ad02  CMP dword ptr [EBP + 0x8],0x4
0041ad06  JNZ 0x0041ad11
0041ad08  MOV dword ptr [EBP + -0x60],0x0
0041ad0f  JMP 0x0041ad28
0041ad11  MOV EDX,dword ptr [EBP + 0x8]
0041ad14  IMUL EDX,EDX,0x118
0041ad1a  MOV EAX,dword ptr [EBP + -0x30]
0041ad1d  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041ad25  MOV dword ptr [EBP + -0x60],ECX
0041ad28  MOV EDX,dword ptr [EBP + -0x60]
0041ad2b  MOV dword ptr [EBP + -0x28],EDX
0041ad2e  MOV EAX,dword ptr [EBP + -0x28]
0041ad31  PUSH EAX
0041ad32  MOV ECX,dword ptr [EBP + 0x8]
0041ad35  PUSH ECX
0041ad36  MOV ECX,dword ptr [EBP + -0x30]
0041ad39  CALL 0x004198d0
0041ad3e  CMP EAX,0x9
0041ad41  JZ 0x0041ad4c
0041ad43  MOV dword ptr [EBP + -0x64],0x0
0041ad4a  JMP 0x0041ad53
0041ad4c  MOV dword ptr [EBP + -0x64],0x1
0041ad53  MOV AL,byte ptr [EBP + -0x64]
0041ad56  JMP 0x0041adc2
0041ad58  CMP dword ptr [EBP + 0x8],-0x1
0041ad5c  JNZ 0x0041ad67
0041ad5e  MOV dword ptr [EBP + -0x2c],0xffffffff
0041ad65  JMP 0x0041ad93
0041ad67  CMP dword ptr [EBP + 0x8],0x4
0041ad6b  JNZ 0x0041ad76
0041ad6d  MOV dword ptr [EBP + -0x68],0x0
0041ad74  JMP 0x0041ad8d
0041ad76  MOV EDX,dword ptr [EBP + 0x8]
0041ad79  IMUL EDX,EDX,0x118
0041ad7f  MOV EAX,dword ptr [EBP + -0x30]
0041ad82  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041ad8a  MOV dword ptr [EBP + -0x68],ECX
0041ad8d  MOV EDX,dword ptr [EBP + -0x68]
0041ad90  MOV dword ptr [EBP + -0x2c],EDX
0041ad93  MOV EAX,dword ptr [EBP + -0x2c]
0041ad96  PUSH EAX
0041ad97  MOV ECX,dword ptr [EBP + 0x8]
0041ad9a  PUSH ECX
0041ad9b  MOV ECX,dword ptr [EBP + -0x30]
0041ad9e  CALL 0x0041af80
0041ada3  JMP 0x0041adc2
0041ada5  XOR EDX,EDX
0041ada7  JNZ 0x0041adc0
0041ada9  PUSH 0x432
0041adae  PUSH 0x6b4b30
0041adb3  PUSH 0x6b2f58
0041adb8  CALL 0x005e9f20
0041adbd  ADD ESP,0xc
0041adc0  XOR AL,AL
0041adc2  MOV ESP,EBP
0041adc4  POP EBP
0041adc5  RET 0x4
