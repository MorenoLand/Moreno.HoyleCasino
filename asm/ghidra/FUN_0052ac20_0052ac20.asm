; FUN_0052ac20  0052ac20
0052ac20  PUSH EBP
0052ac21  MOV EBP,ESP
0052ac23  SUB ESP,0x10
0052ac26  MOV dword ptr [EBP + -0x10],ECX
0052ac29  MOV ECX,dword ptr [0x0079338c]
0052ac2f  CALL 0x005384e0
0052ac34  MOVZX EAX,AL
0052ac37  TEST EAX,EAX
0052ac39  JNZ 0x0052ac40
0052ac3b  JMP 0x0052ae95
0052ac40  MOV ECX,dword ptr [0x0079338c]
0052ac46  MOV EDX,dword ptr [ECX + 0x8]
0052ac49  MOV dword ptr [EBP + -0x8],EDX
0052ac4c  MOV EAX,[0x00793394]
0052ac51  MOV EDX,dword ptr [EAX]
0052ac53  MOV ECX,dword ptr [0x00793394]
0052ac59  MOV EAX,dword ptr [EDX + 0x40]
0052ac5c  CALL EAX
0052ac5e  MOV dword ptr [EBP + -0xc],EAX
0052ac61  CMP dword ptr [EBP + -0xc],0x3
0052ac65  JNZ 0x0052ad33
0052ac6b  MOV dword ptr [EBP + -0x4],0x3
0052ac72  JMP 0x0052ac7d
0052ac74  MOV ECX,dword ptr [EBP + -0x4]
0052ac77  ADD ECX,0x1
0052ac7a  MOV dword ptr [EBP + -0x4],ECX
0052ac7d  CMP dword ptr [EBP + -0x4],0x8
0052ac81  JGE 0x0052aca2
0052ac83  MOV EDX,dword ptr [EBP + -0x4]
0052ac86  MOV EAX,dword ptr [EBP + -0x10]
0052ac89  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ac8d  MOV EDX,dword ptr [EBP + -0x4]
0052ac90  MOV EAX,dword ptr [EBP + -0x10]
0052ac93  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ac97  MOV EAX,dword ptr [ECX]
0052ac99  MOV ECX,EDX
0052ac9b  MOV EDX,dword ptr [EAX + 0x70]
0052ac9e  CALL EDX
0052aca0  JMP 0x0052ac74
0052aca2  CMP dword ptr [EBP + -0x8],0x1
0052aca6  JL 0x0052acbf
0052aca8  MOV EAX,dword ptr [EBP + -0x10]
0052acab  MOV ECX,dword ptr [EAX + 0x3c]
0052acae  MOV EDX,dword ptr [EBP + -0x10]
0052acb1  MOV EAX,dword ptr [EDX + 0x3c]
0052acb4  MOV EDX,dword ptr [ECX]
0052acb6  MOV ECX,EAX
0052acb8  MOV EAX,dword ptr [EDX + 0x74]
0052acbb  CALL EAX
0052acbd  JMP 0x0052acd2
0052acbf  MOV ECX,dword ptr [EBP + -0x10]
0052acc2  MOV EDX,dword ptr [ECX + 0x3c]
0052acc5  MOV EAX,dword ptr [EBP + -0x10]
0052acc8  MOV ECX,dword ptr [EAX + 0x3c]
0052accb  MOV EDX,dword ptr [EDX]
0052accd  MOV EAX,dword ptr [EDX + 0x70]
0052acd0  CALL EAX
0052acd2  CMP dword ptr [EBP + -0x8],0x2
0052acd6  JL 0x0052aced
0052acd8  MOV ECX,dword ptr [EBP + -0x10]
0052acdb  MOV EDX,dword ptr [ECX + 0x40]
0052acde  MOV EAX,dword ptr [EBP + -0x10]
0052ace1  MOV ECX,dword ptr [EAX + 0x40]
0052ace4  MOV EDX,dword ptr [EDX]
0052ace6  MOV EAX,dword ptr [EDX + 0x74]
0052ace9  CALL EAX
0052aceb  JMP 0x0052ad00
0052aced  MOV ECX,dword ptr [EBP + -0x10]
0052acf0  MOV EDX,dword ptr [ECX + 0x40]
0052acf3  MOV EAX,dword ptr [EBP + -0x10]
0052acf6  MOV ECX,dword ptr [EAX + 0x40]
0052acf9  MOV EDX,dword ptr [EDX]
0052acfb  MOV EAX,dword ptr [EDX + 0x70]
0052acfe  CALL EAX
0052ad00  CMP dword ptr [EBP + -0x8],0x3
0052ad04  JL 0x0052ad1b
0052ad06  MOV ECX,dword ptr [EBP + -0x10]
0052ad09  MOV EDX,dword ptr [ECX + 0x44]
0052ad0c  MOV EAX,dword ptr [EBP + -0x10]
0052ad0f  MOV ECX,dword ptr [EAX + 0x44]
0052ad12  MOV EDX,dword ptr [EDX]
0052ad14  MOV EAX,dword ptr [EDX + 0x74]
0052ad17  CALL EAX
0052ad19  JMP 0x0052ad2e
0052ad1b  MOV ECX,dword ptr [EBP + -0x10]
0052ad1e  MOV EDX,dword ptr [ECX + 0x44]
0052ad21  MOV EAX,dword ptr [EBP + -0x10]
0052ad24  MOV ECX,dword ptr [EAX + 0x44]
0052ad27  MOV EDX,dword ptr [EDX]
0052ad29  MOV EAX,dword ptr [EDX + 0x70]
0052ad2c  CALL EAX
0052ad2e  JMP 0x0052ae95
0052ad33  CMP dword ptr [EBP + -0xc],0x5
0052ad37  JNZ 0x0052ae5e
0052ad3d  MOV dword ptr [EBP + -0x4],0x0
0052ad44  JMP 0x0052ad4f
0052ad46  MOV ECX,dword ptr [EBP + -0x4]
0052ad49  ADD ECX,0x1
0052ad4c  MOV dword ptr [EBP + -0x4],ECX
0052ad4f  CMP dword ptr [EBP + -0x4],0x3
0052ad53  JGE 0x0052ad74
0052ad55  MOV EDX,dword ptr [EBP + -0x4]
0052ad58  MOV EAX,dword ptr [EBP + -0x10]
0052ad5b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ad5f  MOV EDX,dword ptr [EBP + -0x4]
0052ad62  MOV EAX,dword ptr [EBP + -0x10]
0052ad65  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ad69  MOV EAX,dword ptr [ECX]
0052ad6b  MOV ECX,EDX
0052ad6d  MOV EDX,dword ptr [EAX + 0x70]
0052ad70  CALL EDX
0052ad72  JMP 0x0052ad46
0052ad74  CMP dword ptr [EBP + -0x8],0x1
0052ad78  JL 0x0052ad91
0052ad7a  MOV EAX,dword ptr [EBP + -0x10]
0052ad7d  MOV ECX,dword ptr [EAX + 0x48]
0052ad80  MOV EDX,dword ptr [EBP + -0x10]
0052ad83  MOV EAX,dword ptr [EDX + 0x48]
0052ad86  MOV EDX,dword ptr [ECX]
0052ad88  MOV ECX,EAX
0052ad8a  MOV EAX,dword ptr [EDX + 0x74]
0052ad8d  CALL EAX
0052ad8f  JMP 0x0052ada4
0052ad91  MOV ECX,dword ptr [EBP + -0x10]
0052ad94  MOV EDX,dword ptr [ECX + 0x48]
0052ad97  MOV EAX,dword ptr [EBP + -0x10]
0052ad9a  MOV ECX,dword ptr [EAX + 0x48]
0052ad9d  MOV EDX,dword ptr [EDX]
0052ad9f  MOV EAX,dword ptr [EDX + 0x70]
0052ada2  CALL EAX
0052ada4  CMP dword ptr [EBP + -0x8],0x2
0052ada8  JL 0x0052adbf
0052adaa  MOV ECX,dword ptr [EBP + -0x10]
0052adad  MOV EDX,dword ptr [ECX + 0x4c]
0052adb0  MOV EAX,dword ptr [EBP + -0x10]
0052adb3  MOV ECX,dword ptr [EAX + 0x4c]
0052adb6  MOV EDX,dword ptr [EDX]
0052adb8  MOV EAX,dword ptr [EDX + 0x74]
0052adbb  CALL EAX
0052adbd  JMP 0x0052add2
0052adbf  MOV ECX,dword ptr [EBP + -0x10]
0052adc2  MOV EDX,dword ptr [ECX + 0x4c]
0052adc5  MOV EAX,dword ptr [EBP + -0x10]
0052adc8  MOV ECX,dword ptr [EAX + 0x4c]
0052adcb  MOV EDX,dword ptr [EDX]
0052adcd  MOV EAX,dword ptr [EDX + 0x70]
0052add0  CALL EAX
0052add2  CMP dword ptr [EBP + -0x8],0x3
0052add6  JL 0x0052aded
0052add8  MOV ECX,dword ptr [EBP + -0x10]
0052addb  MOV EDX,dword ptr [ECX + 0x50]
0052adde  MOV EAX,dword ptr [EBP + -0x10]
0052ade1  MOV ECX,dword ptr [EAX + 0x50]
0052ade4  MOV EDX,dword ptr [EDX]
0052ade6  MOV EAX,dword ptr [EDX + 0x74]
0052ade9  CALL EAX
0052adeb  JMP 0x0052ae00
0052aded  MOV ECX,dword ptr [EBP + -0x10]
0052adf0  MOV EDX,dword ptr [ECX + 0x50]
0052adf3  MOV EAX,dword ptr [EBP + -0x10]
0052adf6  MOV ECX,dword ptr [EAX + 0x50]
0052adf9  MOV EDX,dword ptr [EDX]
0052adfb  MOV EAX,dword ptr [EDX + 0x70]
0052adfe  CALL EAX
0052ae00  CMP dword ptr [EBP + -0x8],0x4
0052ae04  JL 0x0052ae1b
0052ae06  MOV ECX,dword ptr [EBP + -0x10]
0052ae09  MOV EDX,dword ptr [ECX + 0x54]
0052ae0c  MOV EAX,dword ptr [EBP + -0x10]
0052ae0f  MOV ECX,dword ptr [EAX + 0x54]
0052ae12  MOV EDX,dword ptr [EDX]
0052ae14  MOV EAX,dword ptr [EDX + 0x74]
0052ae17  CALL EAX
0052ae19  JMP 0x0052ae2e
0052ae1b  MOV ECX,dword ptr [EBP + -0x10]
0052ae1e  MOV EDX,dword ptr [ECX + 0x54]
0052ae21  MOV EAX,dword ptr [EBP + -0x10]
0052ae24  MOV ECX,dword ptr [EAX + 0x54]
0052ae27  MOV EDX,dword ptr [EDX]
0052ae29  MOV EAX,dword ptr [EDX + 0x70]
0052ae2c  CALL EAX
0052ae2e  CMP dword ptr [EBP + -0x8],0x5
0052ae32  JL 0x0052ae49
0052ae34  MOV ECX,dword ptr [EBP + -0x10]
0052ae37  MOV EDX,dword ptr [ECX + 0x58]
0052ae3a  MOV EAX,dword ptr [EBP + -0x10]
0052ae3d  MOV ECX,dword ptr [EAX + 0x58]
0052ae40  MOV EDX,dword ptr [EDX]
0052ae42  MOV EAX,dword ptr [EDX + 0x74]
0052ae45  CALL EAX
0052ae47  JMP 0x0052ae5c
0052ae49  MOV ECX,dword ptr [EBP + -0x10]
0052ae4c  MOV EDX,dword ptr [ECX + 0x58]
0052ae4f  MOV EAX,dword ptr [EBP + -0x10]
0052ae52  MOV ECX,dword ptr [EAX + 0x58]
0052ae55  MOV EDX,dword ptr [EDX]
0052ae57  MOV EAX,dword ptr [EDX + 0x70]
0052ae5a  CALL EAX
0052ae5c  JMP 0x0052ae95
0052ae5e  MOV dword ptr [EBP + -0x4],0x0
0052ae65  JMP 0x0052ae70
0052ae67  MOV ECX,dword ptr [EBP + -0x4]
0052ae6a  ADD ECX,0x1
0052ae6d  MOV dword ptr [EBP + -0x4],ECX
0052ae70  CMP dword ptr [EBP + -0x4],0x8
0052ae74  JGE 0x0052ae95
0052ae76  MOV EDX,dword ptr [EBP + -0x4]
0052ae79  MOV EAX,dword ptr [EBP + -0x10]
0052ae7c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ae80  MOV EDX,dword ptr [EBP + -0x4]
0052ae83  MOV EAX,dword ptr [EBP + -0x10]
0052ae86  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ae8a  MOV EAX,dword ptr [ECX]
0052ae8c  MOV ECX,EDX
0052ae8e  MOV EDX,dword ptr [EAX + 0x70]
0052ae91  CALL EDX
0052ae93  JMP 0x0052ae67
0052ae95  MOV ESP,EBP
0052ae97  POP EBP
0052ae98  RET
