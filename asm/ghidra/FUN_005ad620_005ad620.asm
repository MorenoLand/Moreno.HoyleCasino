; FUN_005ad620  005ad620
005ad620  PUSH EBP
005ad621  MOV EBP,ESP
005ad623  SUB ESP,0x1ac
005ad629  PUSH ESI
005ad62a  MOV dword ptr [EBP + 0xfffffec0],ECX
005ad630  MOV byte ptr [EBP + -0x45],0x1
005ad634  MOV ECX,dword ptr [0x00793604]
005ad63a  CALL 0x005b5cb0
005ad63f  MOV dword ptr [EBP + -0x44],EAX
005ad642  MOV dword ptr [EBP + -0x40],0xffffffff
005ad649  MOV dword ptr [EBP + -0x4c],0xffffffff
005ad650  MOV ECX,dword ptr [0x00793604]
005ad656  CALL 0x005b4f00
005ad65b  MOV dword ptr [EBP + -0x4],EAX
005ad65e  FLDZ
005ad660  FSTP double ptr [EBP + -0x18]
005ad663  FLD1
005ad665  FSTP double ptr [EBP + -0x10]
005ad668  MOV dword ptr [EBP + -0x50],0xffffffff
005ad66f  MOV dword ptr [EBP + -0x3c],0xffffffff
005ad676  MOV ECX,dword ptr [0x00793604]
005ad67c  CALL 0x005b5240
005ad681  MOV dword ptr [EBP + 0xfffffebc],EAX
005ad687  CMP dword ptr [EBP + 0xfffffebc],0xc
005ad68e  JA 0x005ae855
005ad694  MOV EAX,dword ptr [EBP + 0xfffffebc]
005ad69a  JMP dword ptr [EAX*0x4 + 0x5aea04]
005ad6a1  MOV dword ptr [EBP + -0x3c],0x7d8
005ad6a8  JMP 0x005ae870
005ad6ad  PUSH -0x1
005ad6af  MOV ECX,dword ptr [EBP + -0x4]
005ad6b2  PUSH ECX
005ad6b3  MOV ECX,dword ptr [0x00793604]
005ad6b9  CALL 0x005b4f50
005ad6be  CMP EAX,0x15
005ad6c1  JNZ 0x005ad73f
005ad6c3  PUSH 0x1
005ad6c5  MOV EDX,dword ptr [EBP + -0x4]
005ad6c8  PUSH EDX
005ad6c9  MOV ECX,dword ptr [0x00793604]
005ad6cf  CALL 0x005b73a0
005ad6d4  MOV EAX,dword ptr [EBP + -0x4]
005ad6d7  PUSH EAX
005ad6d8  CALL 0x005dcb00
005ad6dd  ADD ESP,0x4
005ad6e0  MOV dword ptr [EBP + -0x70],EAX
005ad6e3  MOV ECX,dword ptr [EBP + -0x70]
005ad6e6  CALL 0x0063aac0
005ad6eb  MOV ECX,dword ptr [EAX]
005ad6ed  MOV dword ptr [EBP + -0x68],ECX
005ad6f0  CMP dword ptr [EBP + -0x68],0x2
005ad6f4  JZ 0x005ad715
005ad6f6  MOV ECX,dword ptr [EBP + -0x70]
005ad6f9  CALL 0x0063aac0
005ad6fe  MOV EDX,dword ptr [EAX]
005ad700  MOV dword ptr [EBP + -0x6c],EDX
005ad703  CMP dword ptr [EBP + -0x6c],0x3
005ad707  JZ 0x005ad715
005ad709  MOV dword ptr [EBP + 0xfffffeb8],0x0
005ad713  JMP 0x005ad71f
005ad715  MOV dword ptr [EBP + 0xfffffeb8],0x1
005ad71f  MOVZX EAX,byte ptr [EBP + 0xfffffeb8]
005ad726  TEST EAX,EAX
005ad728  JZ 0x005ad73a
005ad72a  MOV dword ptr [EBP + -0x3c],0x40d
005ad731  FLD double ptr [0x006b2c38]
005ad737  FSTP double ptr [EBP + -0x10]
005ad73a  JMP 0x005ad7d8
005ad73f  PUSH 0x2
005ad741  MOV ECX,dword ptr [EBP + -0x4]
005ad744  PUSH ECX
005ad745  MOV ECX,dword ptr [0x00793604]
005ad74b  CALL 0x005b73a0
005ad750  MOV EDX,dword ptr [EBP + -0x4]
005ad753  PUSH EDX
005ad754  CALL 0x005dcb00
005ad759  ADD ESP,0x4
005ad75c  MOV dword ptr [EBP + -0x7c],EAX
005ad75f  MOV ECX,dword ptr [EBP + -0x7c]
005ad762  CALL 0x0063aac0
005ad767  MOV EAX,dword ptr [EAX]
005ad769  MOV dword ptr [EBP + -0x74],EAX
005ad76c  CMP dword ptr [EBP + -0x74],0x2
005ad770  JZ 0x005ad791
005ad772  MOV ECX,dword ptr [EBP + -0x7c]
005ad775  CALL 0x0063aac0
005ad77a  MOV ECX,dword ptr [EAX]
005ad77c  MOV dword ptr [EBP + -0x78],ECX
005ad77f  CMP dword ptr [EBP + -0x78],0x3
005ad783  JZ 0x005ad791
005ad785  MOV dword ptr [EBP + 0xfffffeb4],0x0
005ad78f  JMP 0x005ad79b
005ad791  MOV dword ptr [EBP + 0xfffffeb4],0x1
005ad79b  MOVZX EDX,byte ptr [EBP + 0xfffffeb4]
005ad7a2  TEST EDX,EDX
005ad7a4  JNZ 0x005ad7c8
005ad7a6  MOV dword ptr [EBP + -0x3c],0x401
005ad7ad  MOV dword ptr [EBP + -0x50],0x402
005ad7b4  FLD double ptr [0x006b3e48]
005ad7ba  FSTP double ptr [EBP + -0x18]
005ad7bd  FLD double ptr [0x006b2c38]
005ad7c3  FSTP double ptr [EBP + -0x10]
005ad7c6  JMP 0x005ad7d8
005ad7c8  MOV dword ptr [EBP + -0x3c],0x3e8
005ad7cf  FLD double ptr [0x006b3e40]
005ad7d5  FSTP double ptr [EBP + -0x10]
005ad7d8  JMP 0x005ae870
005ad7dd  MOV dword ptr [EBP + -0x3c],0x7d3
005ad7e4  JMP 0x005ae870
005ad7e9  MOV EAX,[0x00793604]
005ad7ee  MOV ECX,dword ptr [EAX + 0x5bc]
005ad7f4  MOV dword ptr [EBP + 0xfffffeb0],ECX
005ad7fa  CMP dword ptr [EBP + 0xfffffeb0],0x4
005ad801  JA 0x005ad9a1
005ad807  MOV EDX,dword ptr [EBP + 0xfffffeb0]
005ad80d  JMP dword ptr [EDX*0x4 + 0x5aea38]
005ad814  MOV dword ptr [EBP + -0x3c],0x7d5
005ad81b  MOV EAX,dword ptr [EBP + -0x44]
005ad81e  PUSH EAX
005ad81f  CALL 0x005dcb00
005ad824  ADD ESP,0x4
005ad827  MOV dword ptr [EBP + 0xffffff78],EAX
005ad82d  MOV ECX,dword ptr [EBP + 0xffffff78]
005ad833  CALL 0x0063aac0
005ad838  MOV ECX,dword ptr [EAX]
005ad83a  MOV dword ptr [EBP + -0x80],ECX
005ad83d  CMP dword ptr [EBP + -0x80],0x2
005ad841  JZ 0x005ad86b
005ad843  MOV ECX,dword ptr [EBP + 0xffffff78]
005ad849  CALL 0x0063aac0
005ad84e  MOV EDX,dword ptr [EAX]
005ad850  MOV dword ptr [EBP + 0xffffff7c],EDX
005ad856  CMP dword ptr [EBP + 0xffffff7c],0x3
005ad85d  JZ 0x005ad86b
005ad85f  MOV dword ptr [EBP + 0xfffffeac],0x0
005ad869  JMP 0x005ad875
005ad86b  MOV dword ptr [EBP + 0xfffffeac],0x1
005ad875  MOVZX EAX,byte ptr [EBP + 0xfffffeac]
005ad87c  TEST EAX,EAX
005ad87e  JNZ 0x005ad8e8
005ad880  PUSH -0x1
005ad882  MOV ECX,dword ptr [EBP + -0x44]
005ad885  PUSH ECX
005ad886  MOV ECX,dword ptr [0x00793604]
005ad88c  CALL 0x005b4f50
005ad891  CMP EAX,0x10
005ad894  JLE 0x005ad8b5
005ad896  PUSH -0x1
005ad898  MOV EDX,dword ptr [EBP + -0x44]
005ad89b  PUSH EDX
005ad89c  MOV ECX,dword ptr [0x00793604]
005ad8a2  CALL 0x005b4f50
005ad8a7  CMP EAX,0x14
005ad8aa  JGE 0x005ad8b5
005ad8ac  MOV dword ptr [EBP + -0x3c],0x7d6
005ad8b3  JMP 0x005ad8e8
005ad8b5  PUSH -0x1
005ad8b7  MOV EAX,dword ptr [EBP + -0x44]
005ad8ba  PUSH EAX
005ad8bb  MOV ECX,dword ptr [0x00793604]
005ad8c1  CALL 0x005b4f50
005ad8c6  CMP EAX,0x13
005ad8c9  JLE 0x005ad8e8
005ad8cb  PUSH -0x1
005ad8cd  MOV ECX,dword ptr [EBP + -0x44]
005ad8d0  PUSH ECX
005ad8d1  MOV ECX,dword ptr [0x00793604]
005ad8d7  CALL 0x005b4f50
005ad8dc  CMP EAX,0x16
005ad8df  JGE 0x005ad8e8
005ad8e1  MOV dword ptr [EBP + -0x3c],0x7d7
005ad8e8  JMP 0x005ad9bc
005ad8ed  MOV dword ptr [EBP + -0x3c],0x7d0
005ad8f4  JMP 0x005ad9bc
005ad8f9  MOV dword ptr [EBP + -0x3c],0x7d2
005ad900  JMP 0x005ad9bc
005ad905  MOV dword ptr [EBP + -0x3c],0x7d4
005ad90c  JMP 0x005ad9bc
005ad911  MOV dword ptr [EBP + -0x3c],0x402
005ad918  MOV EDX,dword ptr [EBP + -0x44]
005ad91b  PUSH EDX
005ad91c  CALL 0x005dcb00
005ad921  ADD ESP,0x4
005ad924  MOV dword ptr [EBP + 0xffffff6c],EAX
005ad92a  MOV ECX,dword ptr [EBP + 0xffffff6c]
005ad930  CALL 0x0063aac0
005ad935  MOV EAX,dword ptr [EAX]
005ad937  MOV dword ptr [EBP + 0xffffff74],EAX
005ad93d  CMP dword ptr [EBP + 0xffffff74],0x2
005ad944  JZ 0x005ad96e
005ad946  MOV ECX,dword ptr [EBP + 0xffffff6c]
005ad94c  CALL 0x0063aac0
005ad951  MOV ECX,dword ptr [EAX]
005ad953  MOV dword ptr [EBP + 0xffffff70],ECX
005ad959  CMP dword ptr [EBP + 0xffffff70],0x3
005ad960  JZ 0x005ad96e
005ad962  MOV dword ptr [EBP + 0xfffffea8],0x0
005ad96c  JMP 0x005ad978
005ad96e  MOV dword ptr [EBP + 0xfffffea8],0x1
005ad978  MOVZX EDX,byte ptr [EBP + 0xfffffea8]
005ad97f  TEST EDX,EDX
005ad981  JNZ 0x005ad99f
005ad983  MOV dword ptr [EBP + -0x50],0x3f6
005ad98a  PUSH 0x2
005ad98c  MOV EAX,dword ptr [EBP + -0x4]
005ad98f  PUSH EAX
005ad990  MOV ECX,dword ptr [0x00793604]
005ad996  CALL 0x005b73a0
005ad99b  MOV byte ptr [EBP + -0x45],0x0
005ad99f  JMP 0x005ad9bc
005ad9a1  XOR ECX,ECX
005ad9a3  JNZ 0x005ad9bc
005ad9a5  PUSH 0x135
005ad9aa  PUSH 0x6cfe84
005ad9af  PUSH 0x6b2f58
005ad9b4  CALL 0x005e9f20
005ad9b9  ADD ESP,0xc
005ad9bc  JMP 0x005ae870
005ad9c1  MOV EAX,[0x00793604]
005ad9c6  MOV ECX,dword ptr [EAX + 0x5bc]
005ad9cc  MOV dword ptr [EBP + 0xfffffea4],ECX
005ad9d2  CMP dword ptr [EBP + 0xfffffea4],0x1
005ad9d9  JZ 0x005ad9f2
005ad9db  CMP dword ptr [EBP + 0xfffffea4],0x2
005ad9e2  JZ 0x005add2e
005ad9e8  JMP 0x005adfcb
005ad9f2  MOV ECX,dword ptr [0x00793604]
005ad9f8  CALL 0x005b58a0
005ad9fd  CMP EAX,0x1
005ada00  JNZ 0x005ada06
005ada02  MOV byte ptr [EBP + -0x45],0x0
005ada06  PUSH -0x1
005ada08  MOV EDX,dword ptr [EBP + -0x4]
005ada0b  PUSH EDX
005ada0c  MOV ECX,dword ptr [0x00793604]
005ada12  CALL 0x005b3300
005ada17  MOVZX EAX,AL
005ada1a  TEST EAX,EAX
005ada1c  JZ 0x005adae5
005ada22  PUSH 0x2
005ada24  MOV ECX,dword ptr [EBP + -0x4]
005ada27  PUSH ECX
005ada28  MOV ECX,dword ptr [0x00793604]
005ada2e  CALL 0x005b73a0
005ada33  MOV EDX,dword ptr [EBP + -0x4]
005ada36  PUSH EDX
005ada37  CALL 0x005dcb00
005ada3c  ADD ESP,0x4
005ada3f  MOV dword ptr [EBP + 0xffffff60],EAX
005ada45  MOV ECX,dword ptr [EBP + 0xffffff60]
005ada4b  CALL 0x0063aac0
005ada50  MOV EAX,dword ptr [EAX]
005ada52  MOV dword ptr [EBP + 0xffffff68],EAX
005ada58  CMP dword ptr [EBP + 0xffffff68],0x2
005ada5f  JZ 0x005ada89
005ada61  MOV ECX,dword ptr [EBP + 0xffffff60]
005ada67  CALL 0x0063aac0
005ada6c  MOV ECX,dword ptr [EAX]
005ada6e  MOV dword ptr [EBP + 0xffffff64],ECX
005ada74  CMP dword ptr [EBP + 0xffffff64],0x3
005ada7b  JZ 0x005ada89
005ada7d  MOV dword ptr [EBP + 0xfffffea0],0x0
005ada87  JMP 0x005ada93
005ada89  MOV dword ptr [EBP + 0xfffffea0],0x1
005ada93  MOVZX EDX,byte ptr [EBP + 0xfffffea0]
005ada9a  TEST EDX,EDX
005ada9c  JNZ 0x005adac0
005ada9e  MOV dword ptr [EBP + -0x3c],0x7d1
005adaa5  MOV dword ptr [EBP + -0x50],0x402
005adaac  FLD double ptr [0x006b3e48]
005adab2  FSTP double ptr [EBP + -0x18]
005adab5  FLD double ptr [0x006b2c40]
005adabb  FSTP double ptr [EBP + -0x10]
005adabe  JMP 0x005adae0
005adac0  MOV dword ptr [EBP + -0x3c],0x3e8
005adac7  MOV dword ptr [EBP + -0x50],0x40f
005adace  FLD double ptr [0x006b3e48]
005adad4  FSTP double ptr [EBP + -0x18]
005adad7  FLD double ptr [0x006b2c40]
005adadd  FSTP double ptr [EBP + -0x10]
005adae0  JMP 0x005add29
005adae5  MOV ECX,dword ptr [0x00793604]
005adaeb  CALL 0x005b58a0
005adaf0  CMP EAX,0x1
005adaf3  JNZ 0x005adafa
005adaf5  JMP 0x005adfcb
005adafa  PUSH -0x1
005adafc  MOV EAX,dword ptr [EBP + -0x4]
005adaff  PUSH EAX
005adb00  MOV ECX,dword ptr [0x00793604]
005adb06  CALL 0x005b4f50
005adb0b  CMP EAX,0x15
005adb0e  JNZ 0x005adbd7
005adb14  PUSH 0x1
005adb16  MOV ECX,dword ptr [EBP + -0x4]
005adb19  PUSH ECX
005adb1a  MOV ECX,dword ptr [0x00793604]
005adb20  CALL 0x005b73a0
005adb25  MOV EDX,dword ptr [EBP + -0x4]
005adb28  PUSH EDX
005adb29  CALL 0x005dcb00
005adb2e  ADD ESP,0x4
005adb31  MOV dword ptr [EBP + 0xffffff54],EAX
005adb37  MOV ECX,dword ptr [EBP + 0xffffff54]
005adb3d  CALL 0x0063aac0
005adb42  MOV EAX,dword ptr [EAX]
005adb44  MOV dword ptr [EBP + 0xffffff5c],EAX
005adb4a  CMP dword ptr [EBP + 0xffffff5c],0x2
005adb51  JZ 0x005adb7b
005adb53  MOV ECX,dword ptr [EBP + 0xffffff54]
005adb59  CALL 0x0063aac0
005adb5e  MOV ECX,dword ptr [EAX]
005adb60  MOV dword ptr [EBP + 0xffffff58],ECX
005adb66  CMP dword ptr [EBP + 0xffffff58],0x3
005adb6d  JZ 0x005adb7b
005adb6f  MOV dword ptr [EBP + 0xfffffe9c],0x0
005adb79  JMP 0x005adb85
005adb7b  MOV dword ptr [EBP + 0xfffffe9c],0x1
005adb85  MOVZX EDX,byte ptr [EBP + 0xfffffe9c]
005adb8c  TEST EDX,EDX
005adb8e  JNZ 0x005adbb2
005adb90  MOV dword ptr [EBP + -0x3c],0x404
005adb97  MOV dword ptr [EBP + -0x50],0x3f4
005adb9e  FLD double ptr [0x006b3e38]
005adba4  FSTP double ptr [EBP + -0x18]
005adba7  FLD double ptr [0x006b2c38]
005adbad  FSTP double ptr [EBP + -0x10]
005adbb0  JMP 0x005adbd2
005adbb2  MOV dword ptr [EBP + -0x3c],0x3f0
005adbb9  MOV dword ptr [EBP + -0x50],0x7dc
005adbc0  FLD double ptr [0x006b2c38]
005adbc6  FSTP double ptr [EBP + -0x18]
005adbc9  FLD double ptr [0x006b2c38]
005adbcf  FSTP double ptr [EBP + -0x10]
005adbd2  JMP 0x005add29
005adbd7  MOV EAX,dword ptr [EBP + -0x4]
005adbda  PUSH EAX
005adbdb  CALL 0x005dcb00
005adbe0  ADD ESP,0x4
005adbe3  MOV dword ptr [EBP + 0xffffff48],EAX
005adbe9  MOV ECX,dword ptr [EBP + 0xffffff48]
005adbef  CALL 0x0063aac0
005adbf4  MOV ECX,dword ptr [EAX]
005adbf6  MOV dword ptr [EBP + 0xffffff50],ECX
005adbfc  CMP dword ptr [EBP + 0xffffff50],0x2
005adc03  JZ 0x005adc2d
005adc05  MOV ECX,dword ptr [EBP + 0xffffff48]
005adc0b  CALL 0x0063aac0
005adc10  MOV EDX,dword ptr [EAX]
005adc12  MOV dword ptr [EBP + 0xffffff4c],EDX
005adc18  CMP dword ptr [EBP + 0xffffff4c],0x3
005adc1f  JZ 0x005adc2d
005adc21  MOV dword ptr [EBP + 0xfffffe98],0x0
005adc2b  JMP 0x005adc37
005adc2d  MOV dword ptr [EBP + 0xfffffe98],0x1
005adc37  MOVZX EAX,byte ptr [EBP + 0xfffffe98]
005adc3e  TEST EAX,EAX
005adc40  JNZ 0x005adca4
005adc42  PUSH -0x1
005adc44  MOV ECX,dword ptr [EBP + -0x4]
005adc47  PUSH ECX
005adc48  MOV ECX,dword ptr [0x00793604]
005adc4e  CALL 0x005b4f50
005adc53  CMP EAX,0xb
005adc56  JLE 0x005adca4
005adc58  PUSH -0x1
005adc5a  MOV EDX,dword ptr [EBP + -0x4]
005adc5d  PUSH EDX
005adc5e  MOV ECX,dword ptr [0x00793604]
005adc64  CALL 0x005b4f50
005adc69  CMP EAX,0x11
005adc6c  JGE 0x005adca4
005adc6e  MOV dword ptr [EBP + -0x3c],0x402
005adc75  MOV dword ptr [EBP + -0x50],0x3f6
005adc7c  FLD double ptr [0x006b2c38]
005adc82  FSTP double ptr [EBP + -0x18]
005adc85  FLD double ptr [0x006b2c38]
005adc8b  FSTP double ptr [EBP + -0x10]
005adc8e  PUSH 0x2
005adc90  MOV EAX,dword ptr [EBP + -0x4]
005adc93  PUSH EAX
005adc94  MOV ECX,dword ptr [0x00793604]
005adc9a  CALL 0x005b73a0
005adc9f  JMP 0x005add29
005adca4  PUSH -0x1
005adca6  MOV ECX,dword ptr [EBP + -0x4]
005adca9  PUSH ECX
005adcaa  MOV ECX,dword ptr [0x00793604]
005adcb0  CALL 0x005b4f50
005adcb5  CMP EAX,0xb
005adcb8  JLE 0x005add03
005adcba  PUSH -0x1
005adcbc  MOV EDX,dword ptr [EBP + -0x4]
005adcbf  PUSH EDX
005adcc0  MOV ECX,dword ptr [0x00793604]
005adcc6  CALL 0x005b4f50
005adccb  CMP EAX,0x11
005adcce  JGE 0x005add03
005adcd0  MOV dword ptr [EBP + -0x3c],0x7db
005adcd7  MOV dword ptr [EBP + -0x50],0x3e8
005adcde  FLD double ptr [0x006b3e38]
005adce4  FSTP double ptr [EBP + -0x18]
005adce7  FLD double ptr [0x006b3e40]
005adced  FSTP double ptr [EBP + -0x10]
005adcf0  PUSH 0x2
005adcf2  MOV EAX,dword ptr [EBP + -0x4]
005adcf5  PUSH EAX
005adcf6  MOV ECX,dword ptr [0x00793604]
005adcfc  CALL 0x005b73a0
005add01  JMP 0x005add29
005add03  PUSH -0x1
005add05  MOV ECX,dword ptr [EBP + -0x4]
005add08  PUSH ECX
005add09  MOV ECX,dword ptr [0x00793604]
005add0f  CALL 0x005b5830
005add14  CMP EAX,0x4
005add17  JLE 0x005add29
005add19  MOV dword ptr [EBP + -0x3c],0x7da
005add20  FLD double ptr [0x006b2c38]
005add26  FSTP double ptr [EBP + -0x10]
005add29  JMP 0x005adfcb
005add2e  MOV ECX,dword ptr [0x00793604]
005add34  CALL 0x005b58a0
005add39  CMP EAX,0x1
005add3c  JNZ 0x005add42
005add3e  MOV byte ptr [EBP + -0x45],0x0
005add42  PUSH -0x1
005add44  MOV EDX,dword ptr [EBP + -0x4]
005add47  PUSH EDX
005add48  MOV ECX,dword ptr [0x00793604]
005add4e  CALL 0x005b3300
005add53  MOVZX EAX,AL
005add56  TEST EAX,EAX
005add58  JZ 0x005ade01
005add5e  PUSH 0x2
005add60  MOV ECX,dword ptr [EBP + -0x4]
005add63  PUSH ECX
005add64  MOV ECX,dword ptr [0x00793604]
005add6a  CALL 0x005b73a0
005add6f  MOV EDX,dword ptr [EBP + -0x4]
005add72  PUSH EDX
005add73  CALL 0x005dcb00
005add78  ADD ESP,0x4
005add7b  MOV dword ptr [EBP + 0xffffff3c],EAX
005add81  MOV ECX,dword ptr [EBP + 0xffffff3c]
005add87  CALL 0x0063aac0
005add8c  MOV EAX,dword ptr [EAX]
005add8e  MOV dword ptr [EBP + 0xffffff44],EAX
005add94  CMP dword ptr [EBP + 0xffffff44],0x2
005add9b  JZ 0x005addc5
005add9d  MOV ECX,dword ptr [EBP + 0xffffff3c]
005adda3  CALL 0x0063aac0
005adda8  MOV ECX,dword ptr [EAX]
005addaa  MOV dword ptr [EBP + 0xffffff40],ECX
005addb0  CMP dword ptr [EBP + 0xffffff40],0x3
005addb7  JZ 0x005addc5
005addb9  MOV dword ptr [EBP + 0xfffffe94],0x0
005addc3  JMP 0x005addcf
005addc5  MOV dword ptr [EBP + 0xfffffe94],0x1
005addcf  MOVZX EDX,byte ptr [EBP + 0xfffffe94]
005addd6  TEST EDX,EDX
005addd8  JNZ 0x005addec
005addda  MOV dword ptr [EBP + -0x3c],0x7d1
005adde1  FLD double ptr [0x006b2c38]
005adde7  FSTP double ptr [EBP + -0x10]
005addea  JMP 0x005addfc
005addec  MOV dword ptr [EBP + -0x3c],0x3e8
005addf3  FLD double ptr [0x006b2c38]
005addf9  FSTP double ptr [EBP + -0x10]
005addfc  JMP 0x005adfcb
005ade01  MOV ECX,dword ptr [0x00793604]
005ade07  CALL 0x005b58a0
005ade0c  CMP EAX,0x1
005ade0f  JNZ 0x005ade16
005ade11  JMP 0x005adfcb
005ade16  PUSH -0x1
005ade18  MOV EAX,dword ptr [EBP + -0x4]
005ade1b  PUSH EAX
005ade1c  MOV ECX,dword ptr [0x00793604]
005ade22  CALL 0x005b4f50
005ade27  CMP EAX,0x15
005ade2a  JNZ 0x005adef3
005ade30  PUSH 0x1
005ade32  MOV ECX,dword ptr [EBP + -0x4]
005ade35  PUSH ECX
005ade36  MOV ECX,dword ptr [0x00793604]
005ade3c  CALL 0x005b73a0
005ade41  MOV EDX,dword ptr [EBP + -0x4]
005ade44  PUSH EDX
005ade45  CALL 0x005dcb00
005ade4a  ADD ESP,0x4
005ade4d  MOV dword ptr [EBP + 0xffffff30],EAX
005ade53  MOV ECX,dword ptr [EBP + 0xffffff30]
005ade59  CALL 0x0063aac0
005ade5e  MOV EAX,dword ptr [EAX]
005ade60  MOV dword ptr [EBP + 0xffffff38],EAX
005ade66  CMP dword ptr [EBP + 0xffffff38],0x2
005ade6d  JZ 0x005ade97
005ade6f  MOV ECX,dword ptr [EBP + 0xffffff30]
005ade75  CALL 0x0063aac0
005ade7a  MOV ECX,dword ptr [EAX]
005ade7c  MOV dword ptr [EBP + 0xffffff34],ECX
005ade82  CMP dword ptr [EBP + 0xffffff34],0x3
005ade89  JZ 0x005ade97
005ade8b  MOV dword ptr [EBP + 0xfffffe90],0x0
005ade95  JMP 0x005adea1
005ade97  MOV dword ptr [EBP + 0xfffffe90],0x1
005adea1  MOVZX EDX,byte ptr [EBP + 0xfffffe90]
005adea8  TEST EDX,EDX
005adeaa  JNZ 0x005adece
005adeac  MOV dword ptr [EBP + -0x3c],0x404
005adeb3  MOV dword ptr [EBP + -0x50],0x3f4
005adeba  FLD double ptr [0x006b3e48]
005adec0  FSTP double ptr [EBP + -0x18]
005adec3  FLD double ptr [0x006b2c38]
005adec9  FSTP double ptr [EBP + -0x10]
005adecc  JMP 0x005adeee
005adece  MOV dword ptr [EBP + -0x3c],0x7d9
005aded5  MOV dword ptr [EBP + -0x50],0x40d
005adedc  FLD double ptr [0x006b3e48]
005adee2  FSTP double ptr [EBP + -0x18]
005adee5  FLD double ptr [0x006b2c38]
005adeeb  FSTP double ptr [EBP + -0x10]
005adeee  JMP 0x005adfcb
005adef3  PUSH -0x1
005adef5  MOV EAX,dword ptr [EBP + -0x4]
005adef8  PUSH EAX
005adef9  MOV ECX,dword ptr [0x00793604]
005adeff  CALL 0x005b4f50
005adf04  CMP EAX,0xf
005adf07  JGE 0x005adfcb
005adf0d  PUSH 0x2
005adf0f  MOV ECX,dword ptr [EBP + -0x4]
005adf12  PUSH ECX
005adf13  MOV ECX,dword ptr [0x00793604]
005adf19  CALL 0x005b73a0
005adf1e  MOV EDX,dword ptr [EBP + -0x4]
005adf21  PUSH EDX
005adf22  CALL 0x005dcb00
005adf27  ADD ESP,0x4
005adf2a  MOV dword ptr [EBP + 0xffffff24],EAX
005adf30  MOV ECX,dword ptr [EBP + 0xffffff24]
005adf36  CALL 0x0063aac0
005adf3b  MOV EAX,dword ptr [EAX]
005adf3d  MOV dword ptr [EBP + 0xffffff2c],EAX
005adf43  CMP dword ptr [EBP + 0xffffff2c],0x2
005adf4a  JZ 0x005adf74
005adf4c  MOV ECX,dword ptr [EBP + 0xffffff24]
005adf52  CALL 0x0063aac0
005adf57  MOV ECX,dword ptr [EAX]
005adf59  MOV dword ptr [EBP + 0xffffff28],ECX
005adf5f  CMP dword ptr [EBP + 0xffffff28],0x3
005adf66  JZ 0x005adf74
005adf68  MOV dword ptr [EBP + 0xfffffe8c],0x0
005adf72  JMP 0x005adf7e
005adf74  MOV dword ptr [EBP + 0xfffffe8c],0x1
005adf7e  MOVZX EDX,byte ptr [EBP + 0xfffffe8c]
005adf85  TEST EDX,EDX
005adf87  JNZ 0x005adfab
005adf89  MOV dword ptr [EBP + -0x3c],0x401
005adf90  MOV dword ptr [EBP + -0x50],0x3f6
005adf97  FLD double ptr [0x006b3e38]
005adf9d  FSTP double ptr [EBP + -0x18]
005adfa0  FLD double ptr [0x006b2c38]
005adfa6  FSTP double ptr [EBP + -0x10]
005adfa9  JMP 0x005adfcb
005adfab  MOV dword ptr [EBP + -0x3c],0x409
005adfb2  MOV dword ptr [EBP + -0x50],0x40f
005adfb9  FLD double ptr [0x006b3e38]
005adfbf  FSTP double ptr [EBP + -0x18]
005adfc2  FLD double ptr [0x006b2c38]
005adfc8  FSTP double ptr [EBP + -0x10]
005adfcb  JMP 0x005ae870
005adfd0  MOV dword ptr [EBP + -0x54],0x3
005adfd7  JMP 0x005adfe2
005adfd9  MOV EAX,dword ptr [EBP + -0x54]
005adfdc  SUB EAX,0x1
005adfdf  MOV dword ptr [EBP + -0x54],EAX
005adfe2  CMP dword ptr [EBP + -0x54],-0x1
005adfe6  JLE 0x005ae21c
005adfec  MOV ECX,dword ptr [EBP + -0x54]
005adfef  PUSH ECX
005adff0  MOV EDX,dword ptr [EBP + -0x4]
005adff3  PUSH EDX
005adff4  MOV ECX,dword ptr [0x00793604]
005adffa  CALL 0x005b5010
005adfff  CMP EAX,-0x1
005ae002  JZ 0x005ae217
005ae008  MOV EAX,dword ptr [EBP + -0x54]
005ae00b  PUSH EAX
005ae00c  MOV ECX,dword ptr [EBP + -0x4]
005ae00f  PUSH ECX
005ae010  MOV ECX,dword ptr [0x00793604]
005ae016  CALL 0x005b5010
005ae01b  MOV dword ptr [EBP + 0xfffffe88],EAX
005ae021  CMP dword ptr [EBP + 0xfffffe88],0x0
005ae028  JZ 0x005ae122
005ae02e  CMP dword ptr [EBP + 0xfffffe88],0x1
005ae035  JZ 0x005ae041
005ae037  JMP 0x005ae215
005ae041  PUSH 0x1
005ae043  MOV EDX,dword ptr [EBP + -0x4]
005ae046  PUSH EDX
005ae047  MOV ECX,dword ptr [0x00793604]
005ae04d  CALL 0x005b73a0
005ae052  MOV EAX,dword ptr [EBP + -0x4]
005ae055  PUSH EAX
005ae056  CALL 0x005dcb00
005ae05b  ADD ESP,0x4
005ae05e  MOV dword ptr [EBP + 0xffffff18],EAX
005ae064  MOV ECX,dword ptr [EBP + 0xffffff18]
005ae06a  CALL 0x0063aac0
005ae06f  MOV ECX,dword ptr [EAX]
005ae071  MOV dword ptr [EBP + 0xffffff20],ECX
005ae077  CMP dword ptr [EBP + 0xffffff20],0x2
005ae07e  JZ 0x005ae0a8
005ae080  MOV ECX,dword ptr [EBP + 0xffffff18]
005ae086  CALL 0x0063aac0
005ae08b  MOV EDX,dword ptr [EAX]
005ae08d  MOV dword ptr [EBP + 0xffffff1c],EDX
005ae093  CMP dword ptr [EBP + 0xffffff1c],0x3
005ae09a  JZ 0x005ae0a8
005ae09c  MOV dword ptr [EBP + 0xfffffe84],0x0
005ae0a6  JMP 0x005ae0b2
005ae0a8  MOV dword ptr [EBP + 0xfffffe84],0x1
005ae0b2  MOVZX EAX,byte ptr [EBP + 0xfffffe84]
005ae0b9  TEST EAX,EAX
005ae0bb  JNZ 0x005ae0fd
005ae0bd  MOV ECX,dword ptr [EBP + -0x4]
005ae0c0  PUSH ECX
005ae0c1  CALL 0x005dcb00
005ae0c6  ADD ESP,0x4
005ae0c9  CMP dword ptr [EAX + 0x4a8],0x5
005ae0d0  JLE 0x005ae0db
005ae0d2  MOV dword ptr [EBP + -0x3c],0x400
005ae0d9  JMP 0x005ae0e2
005ae0db  MOV dword ptr [EBP + -0x3c],0x3fc
005ae0e2  MOV dword ptr [EBP + -0x50],0x404
005ae0e9  FLD double ptr [0x006b3e48]
005ae0ef  FSTP double ptr [EBP + -0x18]
005ae0f2  FLD double ptr [0x006b2c38]
005ae0f8  FSTP double ptr [EBP + -0x10]
005ae0fb  JMP 0x005ae11d
005ae0fd  MOV dword ptr [EBP + -0x3c],0x3f0
005ae104  MOV dword ptr [EBP + -0x50],0x40d
005ae10b  FLD double ptr [0x006b3e38]
005ae111  FSTP double ptr [EBP + -0x18]
005ae114  FLD double ptr [0x006b2c38]
005ae11a  FSTP double ptr [EBP + -0x10]
005ae11d  JMP 0x005ae215
005ae122  PUSH 0x2
005ae124  MOV EDX,dword ptr [EBP + -0x4]
005ae127  PUSH EDX
005ae128  MOV ECX,dword ptr [0x00793604]
005ae12e  CALL 0x005b73a0
005ae133  MOV EAX,dword ptr [EBP + -0x4]
005ae136  PUSH EAX
005ae137  CALL 0x005dcb00
005ae13c  ADD ESP,0x4
005ae13f  MOV dword ptr [EBP + 0xffffff0c],EAX
005ae145  MOV ECX,dword ptr [EBP + 0xffffff0c]
005ae14b  CALL 0x0063aac0
005ae150  MOV ECX,dword ptr [EAX]
005ae152  MOV dword ptr [EBP + 0xffffff14],ECX
005ae158  CMP dword ptr [EBP + 0xffffff14],0x2
005ae15f  JZ 0x005ae189
005ae161  MOV ECX,dword ptr [EBP + 0xffffff0c]
005ae167  CALL 0x0063aac0
005ae16c  MOV EDX,dword ptr [EAX]
005ae16e  MOV dword ptr [EBP + 0xffffff10],EDX
005ae174  CMP dword ptr [EBP + 0xffffff10],0x3
005ae17b  JZ 0x005ae189
005ae17d  MOV dword ptr [EBP + 0xfffffe80],0x0
005ae187  JMP 0x005ae193
005ae189  MOV dword ptr [EBP + 0xfffffe80],0x1
005ae193  MOVZX EAX,byte ptr [EBP + 0xfffffe80]
005ae19a  TEST EAX,EAX
005ae19c  JNZ 0x005ae1f5
005ae19e  MOV ECX,dword ptr [EBP + -0x4]
005ae1a1  PUSH ECX
005ae1a2  CALL 0x005dcb00
005ae1a7  ADD ESP,0x4
005ae1aa  CMP dword ptr [EAX + 0x4a8],-0x5
005ae1b1  JGE 0x005ae1d3
005ae1b3  PUSH 0x2
005ae1b5  CALL 0x0062fbf0
005ae1ba  ADD ESP,0x4
005ae1bd  TEST EAX,EAX
005ae1bf  JNZ 0x005ae1ca
005ae1c1  MOV dword ptr [EBP + -0x3c],0x3f1
005ae1c8  JMP 0x005ae1d1
005ae1ca  MOV dword ptr [EBP + -0x3c],0x3ff
005ae1d1  JMP 0x005ae1da
005ae1d3  MOV dword ptr [EBP + -0x3c],0x402
005ae1da  MOV dword ptr [EBP + -0x50],0x3f6
005ae1e1  FLD double ptr [0x006b3e38]
005ae1e7  FSTP double ptr [EBP + -0x18]
005ae1ea  FLD double ptr [0x006b2c38]
005ae1f0  FSTP double ptr [EBP + -0x10]
005ae1f3  JMP 0x005ae215
005ae1f5  MOV dword ptr [EBP + -0x3c],0x3e8
005ae1fc  MOV dword ptr [EBP + -0x50],0x40f
005ae203  FLD double ptr [0x006b3e38]
005ae209  FSTP double ptr [EBP + -0x18]
005ae20c  FLD double ptr [0x006b2c38]
005ae212  FSTP double ptr [EBP + -0x10]
005ae215  JMP 0x005ae21c
005ae217  JMP 0x005adfd9
005ae21c  JMP 0x005ae870
005ae221  MOV ECX,dword ptr [0x00793600]
005ae227  CALL 0x005db190
005ae22c  MOVZX EDX,AL
005ae22f  TEST EDX,EDX
005ae231  JZ 0x005ae36d
005ae237  MOV ECX,dword ptr [0x00793600]
005ae23d  CALL 0x005dac90
005ae242  CMP EAX,-0x1
005ae245  JNZ 0x005ae24c
005ae247  JMP 0x005ae870
005ae24c  MOV ECX,dword ptr [0x00793600]
005ae252  CALL 0x005dac90
005ae257  PUSH EAX
005ae258  CALL 0x005dcb00
005ae25d  ADD ESP,0x4
005ae260  MOV dword ptr [EBP + 0xffffff00],EAX
005ae266  MOV ECX,dword ptr [EBP + 0xffffff00]
005ae26c  CALL 0x0063aac0
005ae271  MOV EAX,dword ptr [EAX]
005ae273  MOV dword ptr [EBP + 0xffffff08],EAX
005ae279  CMP dword ptr [EBP + 0xffffff08],0x2
005ae280  JZ 0x005ae2aa
005ae282  MOV ECX,dword ptr [EBP + 0xffffff00]
005ae288  CALL 0x0063aac0
005ae28d  MOV ECX,dword ptr [EAX]
005ae28f  MOV dword ptr [EBP + 0xffffff04],ECX
005ae295  CMP dword ptr [EBP + 0xffffff04],0x3
005ae29c  JZ 0x005ae2aa
005ae29e  MOV dword ptr [EBP + 0xfffffe7c],0x0
005ae2a8  JMP 0x005ae2b4
005ae2aa  MOV dword ptr [EBP + 0xfffffe7c],0x1
005ae2b4  MOVZX EDX,byte ptr [EBP + 0xfffffe7c]
005ae2bb  TEST EDX,EDX
005ae2bd  JZ 0x005ae2cb
005ae2bf  MOV dword ptr [EBP + 0xfffffe78],0xffffffff
005ae2c9  JMP 0x005ae2dc
005ae2cb  MOV ECX,dword ptr [0x00793600]
005ae2d1  CALL 0x005dac90
005ae2d6  MOV dword ptr [EBP + 0xfffffe78],EAX
005ae2dc  MOV EAX,dword ptr [EBP + 0xfffffe78]
005ae2e2  MOV dword ptr [EBP + -0x44],EAX
005ae2e5  MOV ECX,dword ptr [0x00793600]
005ae2eb  CALL 0x005dac90
005ae2f0  PUSH EAX
005ae2f1  CALL 0x005dcb00
005ae2f6  ADD ESP,0x4
005ae2f9  MOV dword ptr [EBP + 0xfffffef4],EAX
005ae2ff  MOV ECX,dword ptr [EBP + 0xfffffef4]
005ae305  CALL 0x0063aac0
005ae30a  MOV ECX,dword ptr [EAX]
005ae30c  MOV dword ptr [EBP + 0xfffffefc],ECX
005ae312  CMP dword ptr [EBP + 0xfffffefc],0x2
005ae319  JZ 0x005ae343
005ae31b  MOV ECX,dword ptr [EBP + 0xfffffef4]
005ae321  CALL 0x0063aac0
005ae326  MOV EDX,dword ptr [EAX]
005ae328  MOV dword ptr [EBP + 0xfffffef8],EDX
005ae32e  CMP dword ptr [EBP + 0xfffffef8],0x3
005ae335  JZ 0x005ae343
005ae337  MOV dword ptr [EBP + 0xfffffe74],0x0
005ae341  JMP 0x005ae34d
005ae343  MOV dword ptr [EBP + 0xfffffe74],0x1
005ae34d  MOVZX EAX,byte ptr [EBP + 0xfffffe74]
005ae354  NEG EAX
005ae356  SBB EAX,EAX
005ae358  AND EAX,0x15
005ae35b  ADD EAX,0x3fd
005ae360  MOV dword ptr [EBP + -0x3c],EAX
005ae363  FLD1
005ae365  FSTP double ptr [EBP + -0x10]
005ae368  JMP 0x005ae870
005ae36d  PUSH 0xa
005ae36f  CALL 0x0062fbf0
005ae374  ADD ESP,0x4
005ae377  CMP EAX,0x6
005ae37a  JGE 0x005ae4f2
005ae380  PUSH 0x2
005ae382  CALL 0x0062fbf0
005ae387  ADD ESP,0x4
005ae38a  TEST EAX,EAX
005ae38c  JZ 0x005ae442
005ae392  MOV ECX,dword ptr [0x00793600]
005ae398  CALL 0x005dac90
005ae39d  MOV dword ptr [EBP + -0x4],EAX
005ae3a0  CMP dword ptr [EBP + -0x4],-0x1
005ae3a4  JZ 0x005ae43d
005ae3aa  MOV ECX,dword ptr [EBP + -0x4]
005ae3ad  PUSH ECX
005ae3ae  CALL 0x005dcb00
005ae3b3  ADD ESP,0x4
005ae3b6  MOV dword ptr [EBP + 0xfffffee8],EAX
005ae3bc  MOV ECX,dword ptr [EBP + 0xfffffee8]
005ae3c2  CALL 0x0063aac0
005ae3c7  MOV EDX,dword ptr [EAX]
005ae3c9  MOV dword ptr [EBP + 0xfffffef0],EDX
005ae3cf  CMP dword ptr [EBP + 0xfffffef0],0x2
005ae3d6  JZ 0x005ae400
005ae3d8  MOV ECX,dword ptr [EBP + 0xfffffee8]
005ae3de  CALL 0x0063aac0
005ae3e3  MOV EAX,dword ptr [EAX]
005ae3e5  MOV dword ptr [EBP + 0xfffffeec],EAX
005ae3eb  CMP dword ptr [EBP + 0xfffffeec],0x3
005ae3f2  JZ 0x005ae400
005ae3f4  MOV dword ptr [EBP + 0xfffffe70],0x0
005ae3fe  JMP 0x005ae40a
005ae400  MOV dword ptr [EBP + 0xfffffe70],0x1
005ae40a  MOVZX ECX,byte ptr [EBP + 0xfffffe70]
005ae411  TEST ECX,ECX
005ae413  JNZ 0x005ae42d
005ae415  MOV EDX,dword ptr [EBP + -0x4]
005ae418  MOV dword ptr [EBP + -0x44],EDX
005ae41b  MOV dword ptr [EBP + -0x3c],0x3f2
005ae422  FLD double ptr [0x006b3e40]
005ae428  FSTP double ptr [EBP + -0x10]
005ae42b  JMP 0x005ae43d
005ae42d  MOV dword ptr [EBP + -0x3c],0x40b
005ae434  FLD double ptr [0x006b3e40]
005ae43a  FSTP double ptr [EBP + -0x10]
005ae43d  JMP 0x005ae4ed
005ae442  MOV ECX,dword ptr [0x00793600]
005ae448  CALL 0x005dada0
005ae44d  MOV dword ptr [EBP + -0x4],EAX
005ae450  CMP dword ptr [EBP + -0x4],-0x1
005ae454  JZ 0x005ae4ed
005ae45a  MOV EAX,dword ptr [EBP + -0x4]
005ae45d  PUSH EAX
005ae45e  CALL 0x005dcb00
005ae463  ADD ESP,0x4
005ae466  MOV dword ptr [EBP + 0xfffffedc],EAX
005ae46c  MOV ECX,dword ptr [EBP + 0xfffffedc]
005ae472  CALL 0x0063aac0
005ae477  MOV ECX,dword ptr [EAX]
005ae479  MOV dword ptr [EBP + 0xfffffee4],ECX
005ae47f  CMP dword ptr [EBP + 0xfffffee4],0x2
005ae486  JZ 0x005ae4b0
005ae488  MOV ECX,dword ptr [EBP + 0xfffffedc]
005ae48e  CALL 0x0063aac0
005ae493  MOV EDX,dword ptr [EAX]
005ae495  MOV dword ptr [EBP + 0xfffffee0],EDX
005ae49b  CMP dword ptr [EBP + 0xfffffee0],0x3
005ae4a2  JZ 0x005ae4b0
005ae4a4  MOV dword ptr [EBP + 0xfffffe6c],0x0
005ae4ae  JMP 0x005ae4ba
005ae4b0  MOV dword ptr [EBP + 0xfffffe6c],0x1
005ae4ba  MOVZX EAX,byte ptr [EBP + 0xfffffe6c]
005ae4c1  TEST EAX,EAX
005ae4c3  JNZ 0x005ae4dd
005ae4c5  MOV ECX,dword ptr [EBP + -0x4]
005ae4c8  MOV dword ptr [EBP + -0x44],ECX
005ae4cb  MOV dword ptr [EBP + -0x3c],0x3f3
005ae4d2  FLD double ptr [0x006b3e40]
005ae4d8  FSTP double ptr [EBP + -0x10]
005ae4db  JMP 0x005ae4ed
005ae4dd  MOV dword ptr [EBP + -0x3c],0x40c
005ae4e4  FLD double ptr [0x006b3e40]
005ae4ea  FSTP double ptr [EBP + -0x10]
005ae4ed  JMP 0x005ae6ca
005ae4f2  MOV ECX,dword ptr [0x00793600]
005ae4f8  CALL 0x005dada0
005ae4fd  MOV dword ptr [EBP + -0x4],EAX
005ae500  CMP dword ptr [EBP + -0x4],-0x1
005ae504  JZ 0x005ae5cd
005ae50a  MOV EDX,dword ptr [EBP + -0x4]
005ae50d  PUSH EDX
005ae50e  CALL 0x005dcb00
005ae513  ADD ESP,0x4
005ae516  MOV ECX,EAX
005ae518  CALL 0x005d5a50
005ae51d  MOV ESI,EAX
005ae51f  MOV ECX,dword ptr [0x00793600]
005ae525  CALL 0x005da880
005ae52a  CDQ
005ae52b  MOV ECX,0xa
005ae530  IDIV ECX
005ae532  CMP ESI,EAX
005ae534  JGE 0x005ae5cd
005ae53a  MOV EDX,dword ptr [EBP + -0x4]
005ae53d  PUSH EDX
005ae53e  CALL 0x005dcb00
005ae543  ADD ESP,0x4
005ae546  MOV dword ptr [EBP + 0xfffffed0],EAX
005ae54c  MOV ECX,dword ptr [EBP + 0xfffffed0]
005ae552  CALL 0x0063aac0
005ae557  MOV EAX,dword ptr [EAX]
005ae559  MOV dword ptr [EBP + 0xfffffed8],EAX
005ae55f  CMP dword ptr [EBP + 0xfffffed8],0x2
005ae566  JZ 0x005ae590
005ae568  MOV ECX,dword ptr [EBP + 0xfffffed0]
005ae56e  CALL 0x0063aac0
005ae573  MOV ECX,dword ptr [EAX]
005ae575  MOV dword ptr [EBP + 0xfffffed4],ECX
005ae57b  CMP dword ptr [EBP + 0xfffffed4],0x3
005ae582  JZ 0x005ae590
005ae584  MOV dword ptr [EBP + 0xfffffe68],0x0
005ae58e  JMP 0x005ae59a
005ae590  MOV dword ptr [EBP + 0xfffffe68],0x1
005ae59a  MOVZX EDX,byte ptr [EBP + 0xfffffe68]
005ae5a1  TEST EDX,EDX
005ae5a3  JNZ 0x005ae5bd
005ae5a5  MOV EAX,dword ptr [EBP + -0x4]
005ae5a8  MOV dword ptr [EBP + -0x44],EAX
005ae5ab  MOV dword ptr [EBP + -0x3c],0x3f7
005ae5b2  FLD double ptr [0x006b2c38]
005ae5b8  FSTP double ptr [EBP + -0x10]
005ae5bb  JMP 0x005ae5cd
005ae5bd  MOV dword ptr [EBP + -0x3c],0x410
005ae5c4  FLD double ptr [0x006b2c38]
005ae5ca  FSTP double ptr [EBP + -0x10]
005ae5cd  CMP dword ptr [EBP + -0x3c],-0x1
005ae5d1  JNZ 0x005ae6ca
005ae5d7  MOV dword ptr [EBP + -0x58],0x0
005ae5de  JMP 0x005ae5e9
005ae5e0  MOV ECX,dword ptr [EBP + -0x58]
005ae5e3  ADD ECX,0x1
005ae5e6  MOV dword ptr [EBP + -0x58],ECX
005ae5e9  CMP dword ptr [EBP + -0x58],0x4
005ae5ed  JGE 0x005ae6ca
005ae5f3  MOV EDX,dword ptr [EBP + -0x58]
005ae5f6  PUSH EDX
005ae5f7  CALL 0x005dcb00
005ae5fc  ADD ESP,0x4
005ae5ff  MOV ECX,EAX
005ae601  CALL 0x005d5a50
005ae606  TEST EAX,EAX
005ae608  JNZ 0x005ae6c5
005ae60e  MOV EAX,dword ptr [EBP + 0xfffffec0]
005ae614  ADD EAX,dword ptr [EBP + -0x58]
005ae617  MOVZX ECX,byte ptr [EAX + 0x14]
005ae61b  TEST ECX,ECX
005ae61d  JNZ 0x005ae6c5
005ae623  MOV EDX,dword ptr [EBP + 0xfffffec0]
005ae629  ADD EDX,dword ptr [EBP + -0x58]
005ae62c  MOV byte ptr [EDX + 0x14],0x1
005ae630  MOV EAX,dword ptr [EBP + -0x58]
005ae633  PUSH EAX
005ae634  CALL 0x005dcb00
005ae639  ADD ESP,0x4
005ae63c  MOV dword ptr [EBP + 0xfffffec4],EAX
005ae642  MOV ECX,dword ptr [EBP + 0xfffffec4]
005ae648  CALL 0x0063aac0
005ae64d  MOV ECX,dword ptr [EAX]
005ae64f  MOV dword ptr [EBP + 0xfffffecc],ECX
005ae655  CMP dword ptr [EBP + 0xfffffecc],0x2
005ae65c  JZ 0x005ae686
005ae65e  MOV ECX,dword ptr [EBP + 0xfffffec4]
005ae664  CALL 0x0063aac0
005ae669  MOV EDX,dword ptr [EAX]
005ae66b  MOV dword ptr [EBP + 0xfffffec8],EDX
005ae671  CMP dword ptr [EBP + 0xfffffec8],0x3
005ae678  JZ 0x005ae686
005ae67a  MOV dword ptr [EBP + 0xfffffe64],0x0
005ae684  JMP 0x005ae690
005ae686  MOV dword ptr [EBP + 0xfffffe64],0x1
005ae690  MOVZX EAX,byte ptr [EBP + 0xfffffe64]
005ae697  TEST EAX,EAX
005ae699  JNZ 0x005ae6b3
005ae69b  MOV ECX,dword ptr [EBP + -0x58]
005ae69e  MOV dword ptr [EBP + -0x44],ECX
005ae6a1  MOV dword ptr [EBP + -0x3c],0x3f5
005ae6a8  FLD double ptr [0x006b2c40]
005ae6ae  FSTP double ptr [EBP + -0x10]
005ae6b1  JMP 0x005ae6c3
005ae6b3  MOV dword ptr [EBP + -0x3c],0x40e
005ae6ba  FLD double ptr [0x006b2c40]
005ae6c0  FSTP double ptr [EBP + -0x10]
005ae6c3  JMP 0x005ae6ca
005ae6c5  JMP 0x005ae5e0
005ae6ca  JMP 0x005ae870
005ae6cf  MOV dword ptr [EBP + -0x40],0xcb52
005ae6d6  JMP 0x005ae870
005ae6db  MOV dword ptr [EBP + -0x40],0xcbb6
005ae6e2  JMP 0x005ae870
005ae6e7  MOV dword ptr [EBP + -0x40],0xcbe8
005ae6ee  JMP 0x005ae870
005ae6f3  MOV dword ptr [EBP + -0x40],0xcb85
005ae6fa  JMP 0x005ae870
005ae6ff  MOV dword ptr [EBP + -0x4c],0x0
005ae706  MOV ECX,dword ptr [0x00793604]
005ae70c  CALL 0x005b7d50
005ae711  MOVZX EDX,AL
005ae714  TEST EDX,EDX
005ae716  JZ 0x005ae7cb
005ae71c  MOV ECX,dword ptr [0x00793604]
005ae722  CALL 0x005b58a0
005ae727  CMP EAX,0x1
005ae72a  JG 0x005ae740
005ae72c  MOV ECX,dword ptr [0x00793604]
005ae732  CALL 0x005b4f00
005ae737  CMP EAX,-0x1
005ae73a  JNZ 0x005ae7cb
005ae740  CMP dword ptr [EBP + -0x4],-0x1
005ae744  JNZ 0x005ae752
005ae746  MOV dword ptr [EBP + 0xfffffe60],0x4
005ae750  JMP 0x005ae75b
005ae752  MOV EAX,dword ptr [EBP + -0x4]
005ae755  MOV dword ptr [EBP + 0xfffffe60],EAX
005ae75b  PUSH -0x1
005ae75d  MOV ECX,dword ptr [EBP + 0xfffffe60]
005ae763  PUSH ECX
005ae764  MOV ECX,dword ptr [0x00793604]
005ae76a  CALL 0x005b4f50
005ae76f  MOV dword ptr [EBP + -0x60],EAX
005ae772  CMP dword ptr [EBP + -0x4],-0x1
005ae776  JNZ 0x005ae784
005ae778  MOV dword ptr [EBP + 0xfffffe5c],0x4
005ae782  JMP 0x005ae78d
005ae784  MOV EDX,dword ptr [EBP + -0x4]
005ae787  MOV dword ptr [EBP + 0xfffffe5c],EDX
005ae78d  PUSH -0x1
005ae78f  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005ae795  PUSH EAX
005ae796  MOV ECX,dword ptr [0x00793604]
005ae79c  CALL 0x005b5260
005ae7a1  MOV dword ptr [EBP + -0x5c],EAX
005ae7a4  MOV ECX,dword ptr [EBP + -0x5c]
005ae7a7  CMP ECX,dword ptr [EBP + -0x60]
005ae7aa  JZ 0x005ae7c0
005ae7ac  CMP dword ptr [EBP + -0x60],0x13
005ae7b0  JG 0x005ae7c0
005ae7b2  MOV EDX,dword ptr [EBP + -0x5c]
005ae7b5  ADD EDX,0xcb31
005ae7bb  MOV dword ptr [EBP + -0x40],EDX
005ae7be  JMP 0x005ae7cb
005ae7c0  MOV EAX,dword ptr [EBP + -0x60]
005ae7c3  ADD EAX,0xcb1d
005ae7c8  MOV dword ptr [EBP + -0x40],EAX
005ae7cb  JMP 0x005ae870
005ae7d0  MOV dword ptr [EBP + -0x64],0x3
005ae7d7  JMP 0x005ae7e2
005ae7d9  MOV ECX,dword ptr [EBP + -0x64]
005ae7dc  SUB ECX,0x1
005ae7df  MOV dword ptr [EBP + -0x64],ECX
005ae7e2  CMP dword ptr [EBP + -0x64],-0x1
005ae7e6  JLE 0x005ae853
005ae7e8  MOV EDX,dword ptr [EBP + -0x64]
005ae7eb  PUSH EDX
005ae7ec  MOV EAX,dword ptr [EBP + -0x4]
005ae7ef  PUSH EAX
005ae7f0  MOV ECX,dword ptr [0x00793604]
005ae7f6  CALL 0x005b5010
005ae7fb  CMP EAX,-0x1
005ae7fe  JZ 0x005ae851
005ae800  MOV ECX,dword ptr [EBP + -0x64]
005ae803  PUSH ECX
005ae804  MOV EDX,dword ptr [EBP + -0x4]
005ae807  PUSH EDX
005ae808  MOV ECX,dword ptr [0x00793604]
005ae80e  CALL 0x005b5010
005ae813  MOV dword ptr [EBP + 0xfffffe58],EAX
005ae819  CMP dword ptr [EBP + 0xfffffe58],0x0
005ae820  JZ 0x005ae848
005ae822  CMP dword ptr [EBP + 0xfffffe58],0x1
005ae829  JZ 0x005ae83f
005ae82b  CMP dword ptr [EBP + 0xfffffe58],0x2
005ae832  JZ 0x005ae836
005ae834  JMP 0x005ae84f
005ae836  MOV dword ptr [EBP + -0x40],0xcbcf
005ae83d  JMP 0x005ae84f
005ae83f  MOV dword ptr [EBP + -0x40],0xcc01
005ae846  JMP 0x005ae84f
005ae848  MOV dword ptr [EBP + -0x40],0xcb6b
005ae84f  JMP 0x005ae853
005ae851  JMP 0x005ae7d9
005ae853  JMP 0x005ae870
005ae855  XOR EAX,EAX
005ae857  JNZ 0x005ae870
005ae859  PUSH 0x2a5
005ae85e  PUSH 0x6cfe84
005ae863  PUSH 0x6b2f58
005ae868  CALL 0x005e9f20
005ae86d  ADD ESP,0xc
005ae870  PUSH -0x1
005ae872  PUSH -0x1
005ae874  MOV ECX,dword ptr [0x00793604]
005ae87a  CALL 0x005b7310
005ae87f  PUSH 0x1
005ae881  MOV EDX,dword ptr [0x0162ee80]
005ae887  MOV EAX,dword ptr [EDX + 0x4]
005ae88a  MOV ECX,dword ptr [0x0162ee80]
005ae890  MOV ECX,dword ptr [ECX + 0x4]
005ae893  MOV EDX,dword ptr [EAX]
005ae895  MOV EAX,dword ptr [EDX + 0x4]
005ae898  CALL EAX
005ae89a  CMP dword ptr [EBP + 0x8],0x0
005ae89e  JNZ 0x005ae8ac
005ae8a0  MOV ECX,dword ptr [0x0162ee80]
005ae8a6  MOV EDX,dword ptr [ECX + 0x4]
005ae8a9  MOV dword ptr [EBP + 0x8],EDX
005ae8ac  CMP dword ptr [EBP + -0x44],0x4
005ae8b0  JNZ 0x005ae92e
005ae8b2  CMP dword ptr [EBP + -0x40],-0x1
005ae8b6  JNZ 0x005ae8cc
005ae8b8  PUSH 0x0
005ae8ba  MOV EAX,dword ptr [EBP + 0x8]
005ae8bd  MOV EDX,dword ptr [EAX]
005ae8bf  MOV ECX,dword ptr [EBP + 0x8]
005ae8c2  MOV EAX,dword ptr [EDX + 0x1c]
005ae8c5  CALL EAX
005ae8c7  JMP 0x005ae9fd
005ae8cc  CMP dword ptr [EBP + -0x40],0xcbe8
005ae8d3  JZ 0x005ae8de
005ae8d5  CMP dword ptr [EBP + -0x40],0xcb85
005ae8dc  JNZ 0x005ae8ee
005ae8de  MOV ECX,dword ptr [0x007935f8]
005ae8e4  MOV EDX,dword ptr [ECX + 0x2c]
005ae8e7  MOV byte ptr [EDX + 0x190],0x1
005ae8ee  CMP dword ptr [EBP + -0x4c],-0x1
005ae8f2  JNZ 0x005ae90e
005ae8f4  PUSH 0x0
005ae8f6  MOV EAX,dword ptr [EBP + 0x8]
005ae8f9  PUSH EAX
005ae8fa  MOV ECX,dword ptr [EBP + -0x40]
005ae8fd  PUSH ECX
005ae8fe  MOV EDX,dword ptr [0x007935f8]
005ae904  MOV ECX,dword ptr [EDX + 0x2c]
005ae907  CALL 0x005cd7c0
005ae90c  JMP 0x005ae929
005ae90e  PUSH 0x0
005ae910  MOV EAX,dword ptr [EBP + 0x8]
005ae913  PUSH EAX
005ae914  MOV ECX,dword ptr [EBP + -0x4c]
005ae917  PUSH ECX
005ae918  MOV EDX,dword ptr [EBP + -0x40]
005ae91b  PUSH EDX
005ae91c  MOV EAX,[0x007935f8]
005ae921  MOV ECX,dword ptr [EAX + 0x2c]
005ae924  CALL 0x005cd700
005ae929  JMP 0x005ae9fd
005ae92e  CMP dword ptr [EBP + -0x3c],-0x1
005ae932  JNZ 0x005ae948
005ae934  PUSH 0x0
005ae936  MOV ECX,dword ptr [EBP + 0x8]
005ae939  MOV EDX,dword ptr [ECX]
005ae93b  MOV ECX,dword ptr [EBP + 0x8]
005ae93e  MOV EAX,dword ptr [EDX + 0x1c]
005ae941  CALL EAX
005ae943  JMP 0x005ae9fd
005ae948  CMP dword ptr [EBP + -0x44],-0x1
005ae94c  JZ 0x005ae959
005ae94e  MOV ECX,dword ptr [EBP + -0x44]
005ae951  MOV dword ptr [EBP + 0xfffffe54],ECX
005ae957  JMP 0x005ae978
005ae959  PUSH 0x0
005ae95b  MOV ECX,dword ptr [0x00793604]
005ae961  CALL 0x005b5c90
005ae966  PUSH EAX
005ae967  MOV ECX,dword ptr [0x00793604]
005ae96d  CALL 0x005b5cd0
005ae972  MOV dword ptr [EBP + 0xfffffe54],EAX
005ae978  MOV EDX,dword ptr [EBP + 0xfffffe54]
005ae97e  MOV dword ptr [EBP + -0x38],EDX
005ae981  MOV EAX,dword ptr [EBP + -0x3c]
005ae984  MOV dword ptr [EBP + -0x34],EAX
005ae987  MOV ECX,dword ptr [EBP + -0x50]
005ae98a  MOV dword ptr [EBP + -0x30],ECX
005ae98d  FLD double ptr [EBP + -0x18]
005ae990  FSTP double ptr [EBP + -0x28]
005ae993  FLD double ptr [EBP + -0x10]
005ae996  FSTP double ptr [EBP + -0x20]
005ae999  CMP dword ptr [EBP + -0x38],-0x1
005ae99d  JNZ 0x005ae9be
005ae99f  PUSH 0x0
005ae9a1  PUSH 0x1
005ae9a3  MOV EDX,dword ptr [0x00793600]
005ae9a9  MOV EAX,dword ptr [EDX + 0x4]
005ae9ac  MOV ECX,dword ptr [0x00793600]
005ae9b2  MOV ECX,dword ptr [ECX + 0x4]
005ae9b5  MOV EDX,dword ptr [EAX]
005ae9b7  MOV EAX,dword ptr [EDX + 0x8]
005ae9ba  CALL EAX
005ae9bc  JMP 0x005ae9fd
005ae9be  PUSH 0x1
005ae9c0  MOV ECX,dword ptr [0x00793600]
005ae9c6  MOV EDX,dword ptr [ECX + 0x4]
005ae9c9  MOV EAX,[0x00793600]
005ae9ce  MOV ECX,dword ptr [EAX + 0x4]
005ae9d1  MOV EDX,dword ptr [EDX]
005ae9d3  MOV EAX,dword ptr [EDX + 0x4]
005ae9d6  CALL EAX
005ae9d8  MOV CL,byte ptr [EBP + -0x45]
005ae9db  PUSH ECX
005ae9dc  PUSH 0x2
005ae9de  MOV ECX,dword ptr [0x0162ee84]
005ae9e4  CALL 0x00637810
005ae9e9  PUSH EAX
005ae9ea  MOV EDX,dword ptr [EBP + 0x8]
005ae9ed  PUSH EDX
005ae9ee  LEA EAX,[EBP + -0x38]
005ae9f1  PUSH EAX
005ae9f2  MOV ECX,dword ptr [0x0162ee84]
005ae9f8  CALL 0x00639390
005ae9fd  POP ESI
005ae9fe  MOV ESP,EBP
005aea00  POP EBP
005aea01  RET 0x4
