; FUN_005ba640  005ba640
005ba640  PUSH EBP
005ba641  MOV EBP,ESP
005ba643  PUSH -0x1
005ba645  PUSH 0x6a7f80
005ba64a  MOV EAX,FS:[0x0]
005ba650  PUSH EAX
005ba651  PUSH ECX
005ba652  SUB ESP,0x264
005ba658  PUSH EBX
005ba659  PUSH ESI
005ba65a  PUSH EDI
005ba65b  MOV EAX,[0x00781870]
005ba660  XOR EAX,EBP
005ba662  PUSH EAX
005ba663  LEA EAX,[EBP + -0xc]
005ba666  MOV FS:[0x0],EAX
005ba66c  MOV dword ptr [EBP + -0x10],ESP
005ba66f  MOV dword ptr [EBP + 0xfffffdb4],ECX
005ba675  LEA ECX,[EBP + -0x20]
005ba678  CALL 0x005bbcc0
005ba67d  MOV dword ptr [EBP + -0x4],0x0
005ba684  MOV EAX,dword ptr [EBP + 0x14]
005ba687  PUSH EAX
005ba688  LEA ECX,[EBP + -0x20]
005ba68b  CALL 0x005bc040
005ba690  MOV dword ptr [EBP + -0x4],0x1
005ba697  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba69d  CMP dword ptr [ECX + 0x4],0x0
005ba6a1  JNZ 0x005ba6af
005ba6a3  MOV dword ptr [EBP + 0xfffffdb0],0x0
005ba6ad  JMP 0x005ba6ca
005ba6af  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005ba6b5  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba6bb  MOV ECX,dword ptr [EDX + 0xc]
005ba6be  SUB ECX,dword ptr [EAX + 0x4]
005ba6c1  SAR ECX,0x4
005ba6c4  MOV dword ptr [EBP + 0xfffffdb0],ECX
005ba6ca  MOV EDX,dword ptr [EBP + 0xfffffdb0]
005ba6d0  MOV dword ptr [EBP + -0x24],EDX
005ba6d3  CMP dword ptr [EBP + 0x10],0x0
005ba6d7  JNZ 0x005ba6de
005ba6d9  JMP 0x005baf9d
005ba6de  MOV dword ptr [EBP + -0x34],0xfffffff
005ba6e5  CMP dword ptr [EBP + -0x34],0x0
005ba6e9  JBE 0x005ba6f6
005ba6eb  MOV EAX,dword ptr [EBP + -0x34]
005ba6ee  MOV dword ptr [EBP + 0xfffffdac],EAX
005ba6f4  JMP 0x005ba700
005ba6f6  MOV dword ptr [EBP + 0xfffffdac],0x1
005ba700  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba706  CMP dword ptr [ECX + 0x4],0x0
005ba70a  JNZ 0x005ba718
005ba70c  MOV dword ptr [EBP + 0xfffffda8],0x0
005ba716  JMP 0x005ba733
005ba718  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005ba71e  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba724  MOV ECX,dword ptr [EDX + 0x8]
005ba727  SUB ECX,dword ptr [EAX + 0x4]
005ba72a  SAR ECX,0x4
005ba72d  MOV dword ptr [EBP + 0xfffffda8],ECX
005ba733  MOV EDX,dword ptr [EBP + 0xfffffdac]
005ba739  SUB EDX,dword ptr [EBP + 0xfffffda8]
005ba73f  CMP EDX,dword ptr [EBP + 0x10]
005ba742  JNC 0x005ba74e
005ba744  CALL 0x005bb750
005ba749  JMP 0x005baf9d
005ba74e  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba754  CMP dword ptr [EAX + 0x4],0x0
005ba758  JNZ 0x005ba766
005ba75a  MOV dword ptr [EBP + 0xfffffda4],0x0
005ba764  JMP 0x005ba781
005ba766  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba76c  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005ba772  MOV EAX,dword ptr [ECX + 0x8]
005ba775  SUB EAX,dword ptr [EDX + 0x4]
005ba778  SAR EAX,0x4
005ba77b  MOV dword ptr [EBP + 0xfffffda4],EAX
005ba781  MOV ECX,dword ptr [EBP + 0xfffffda4]
005ba787  ADD ECX,dword ptr [EBP + 0x10]
005ba78a  CMP dword ptr [EBP + -0x24],ECX
005ba78d  JNC 0x005bac06
005ba793  MOV dword ptr [EBP + -0x7c],0xfffffff
005ba79a  CMP dword ptr [EBP + -0x7c],0x0
005ba79e  JBE 0x005ba7ab
005ba7a0  MOV EDX,dword ptr [EBP + -0x7c]
005ba7a3  MOV dword ptr [EBP + 0xfffffda0],EDX
005ba7a9  JMP 0x005ba7b5
005ba7ab  MOV dword ptr [EBP + 0xfffffda0],0x1
005ba7b5  MOV EAX,dword ptr [EBP + -0x24]
005ba7b8  SHR EAX,0x1
005ba7ba  MOV ECX,dword ptr [EBP + 0xfffffda0]
005ba7c0  SUB ECX,EAX
005ba7c2  CMP ECX,dword ptr [EBP + -0x24]
005ba7c5  JNC 0x005ba7d3
005ba7c7  MOV dword ptr [EBP + 0xfffffd9c],0x0
005ba7d1  JMP 0x005ba7e1
005ba7d3  MOV EDX,dword ptr [EBP + -0x24]
005ba7d6  SHR EDX,0x1
005ba7d8  ADD EDX,dword ptr [EBP + -0x24]
005ba7db  MOV dword ptr [EBP + 0xfffffd9c],EDX
005ba7e1  MOV EAX,dword ptr [EBP + 0xfffffd9c]
005ba7e7  MOV dword ptr [EBP + -0x24],EAX
005ba7ea  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba7f0  CMP dword ptr [ECX + 0x4],0x0
005ba7f4  JNZ 0x005ba802
005ba7f6  MOV dword ptr [EBP + 0xfffffd98],0x0
005ba800  JMP 0x005ba81d
005ba802  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005ba808  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba80e  MOV ECX,dword ptr [EDX + 0x8]
005ba811  SUB ECX,dword ptr [EAX + 0x4]
005ba814  SAR ECX,0x4
005ba817  MOV dword ptr [EBP + 0xfffffd98],ECX
005ba81d  MOV EDX,dword ptr [EBP + 0xfffffd98]
005ba823  ADD EDX,dword ptr [EBP + 0x10]
005ba826  CMP dword ptr [EBP + -0x24],EDX
005ba829  JNC 0x005ba86a
005ba82b  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba831  CMP dword ptr [EAX + 0x4],0x0
005ba835  JNZ 0x005ba843
005ba837  MOV dword ptr [EBP + 0xfffffd94],0x0
005ba841  JMP 0x005ba85e
005ba843  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba849  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005ba84f  MOV EAX,dword ptr [ECX + 0x8]
005ba852  SUB EAX,dword ptr [EDX + 0x4]
005ba855  SAR EAX,0x4
005ba858  MOV dword ptr [EBP + 0xfffffd94],EAX
005ba85e  MOV ECX,dword ptr [EBP + 0xfffffd94]
005ba864  ADD ECX,dword ptr [EBP + 0x10]
005ba867  MOV dword ptr [EBP + -0x24],ECX
005ba86a  PUSH 0x0
005ba86c  MOV EDX,dword ptr [EBP + -0x24]
005ba86f  PUSH EDX
005ba870  CALL 0x005bbbd0
005ba875  ADD ESP,0x8
005ba878  MOV dword ptr [EBP + -0x2c],EAX
005ba87b  MOV EAX,dword ptr [EBP + -0x2c]
005ba87e  MOV dword ptr [EBP + -0x28],EAX
005ba881  MOV byte ptr [EBP + -0x4],0x2
005ba885  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba88b  MOV EDX,dword ptr [ECX + 0x4]
005ba88e  MOV dword ptr [EBP + 0xffffff5c],EDX
005ba894  MOV EAX,dword ptr [EBP + -0x2c]
005ba897  MOV dword ptr [EBP + 0xffffff60],EAX
005ba89d  MOV ECX,dword ptr [EBP + 0xc]
005ba8a0  MOV dword ptr [EBP + 0xffffff64],ECX
005ba8a6  MOV EDX,dword ptr [EBP + 0xffffff5c]
005ba8ac  MOV dword ptr [EBP + 0xffffff68],EDX
005ba8b2  XOR EAX,EAX
005ba8b4  MOV byte ptr [EBP + -0x7d],AL
005ba8b7  MOV CL,byte ptr [EBP + -0x7f]
005ba8ba  MOV byte ptr [EBP + -0x7e],CL
005ba8bd  MOV EDX,dword ptr [EBP + 0xffffff64]
005ba8c3  MOV dword ptr [EBP + 0xffffff7c],EDX
005ba8c9  MOV EAX,dword ptr [EBP + 0xffffff68]
005ba8cf  MOV dword ptr [EBP + 0xffffff74],EAX
005ba8d5  MOV CL,byte ptr [EBP + -0x7d]
005ba8d8  MOV byte ptr [EBP + 0xffffff6f],CL
005ba8de  MOV EDX,dword ptr [EBP + 0xffffff60]
005ba8e4  MOV dword ptr [EBP + 0xffffff70],EDX
005ba8ea  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba8f0  PUSH EAX
005ba8f1  MOV ECX,dword ptr [EBP + 0xffffff70]
005ba8f7  PUSH ECX
005ba8f8  MOV EDX,dword ptr [EBP + 0xffffff7c]
005ba8fe  PUSH EDX
005ba8ff  MOV EAX,dword ptr [EBP + 0xffffff74]
005ba905  PUSH EAX
005ba906  CALL 0x005bc5d0
005ba90b  ADD ESP,0x10
005ba90e  MOV dword ptr [EBP + 0xfffffd90],EAX
005ba914  MOV ECX,dword ptr [EBP + 0xfffffd90]
005ba91a  MOV dword ptr [EBP + -0x28],ECX
005ba91d  MOV EDX,dword ptr [EBP + -0x28]
005ba920  MOV dword ptr [EBP + 0xffffff54],EDX
005ba926  XOR EAX,EAX
005ba928  MOV byte ptr [EBP + 0xffffff5b],AL
005ba92e  MOV CL,byte ptr [EBP + 0xffffff59]
005ba934  MOV byte ptr [EBP + 0xffffff5a],CL
005ba93a  MOV DL,byte ptr [EBP + 0xffffff5b]
005ba940  PUSH EDX
005ba941  MOV AL,byte ptr [EBP + 0xffffff5a]
005ba947  PUSH EAX
005ba948  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005ba94e  PUSH ECX
005ba94f  LEA EDX,[EBP + -0x20]
005ba952  PUSH EDX
005ba953  MOV EAX,dword ptr [EBP + 0x10]
005ba956  PUSH EAX
005ba957  MOV ECX,dword ptr [EBP + 0xffffff54]
005ba95d  PUSH ECX
005ba95e  CALL 0x005bbf70
005ba963  ADD ESP,0x18
005ba966  MOV EDX,dword ptr [EBP + 0x10]
005ba969  SHL EDX,0x4
005ba96c  ADD EDX,dword ptr [EBP + -0x28]
005ba96f  MOV dword ptr [EBP + -0x28],EDX
005ba972  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005ba978  MOV ECX,dword ptr [EAX + 0x8]
005ba97b  MOV dword ptr [EBP + 0xffffff2c],ECX
005ba981  MOV EDX,dword ptr [EBP + -0x28]
005ba984  MOV dword ptr [EBP + 0xffffff30],EDX
005ba98a  MOV EAX,dword ptr [EBP + 0xffffff2c]
005ba990  MOV dword ptr [EBP + 0xffffff34],EAX
005ba996  MOV ECX,dword ptr [EBP + 0xc]
005ba999  MOV dword ptr [EBP + 0xffffff38],ECX
005ba99f  XOR EDX,EDX
005ba9a1  MOV byte ptr [EBP + 0xffffff53],DL
005ba9a7  MOV AL,byte ptr [EBP + 0xffffff51]
005ba9ad  MOV byte ptr [EBP + 0xffffff52],AL
005ba9b3  MOV ECX,dword ptr [EBP + 0xffffff34]
005ba9b9  MOV dword ptr [EBP + 0xffffff4c],ECX
005ba9bf  MOV EDX,dword ptr [EBP + 0xffffff38]
005ba9c5  MOV dword ptr [EBP + 0xffffff44],EDX
005ba9cb  MOV AL,byte ptr [EBP + 0xffffff53]
005ba9d1  MOV byte ptr [EBP + 0xffffff3f],AL
005ba9d7  MOV ECX,dword ptr [EBP + 0xffffff30]
005ba9dd  MOV dword ptr [EBP + 0xffffff40],ECX
005ba9e3  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005ba9e9  PUSH EDX
005ba9ea  MOV EAX,dword ptr [EBP + 0xffffff40]
005ba9f0  PUSH EAX
005ba9f1  MOV ECX,dword ptr [EBP + 0xffffff4c]
005ba9f7  PUSH ECX
005ba9f8  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba9fe  PUSH EDX
005ba9ff  CALL 0x005bc5d0
005baa04  ADD ESP,0x10
005baa07  JMP 0x005baaa6
005bac06  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005bac0c  MOV EAX,dword ptr [EDX + 0x8]
005bac0f  SUB EAX,dword ptr [EBP + 0xc]
005bac12  SAR EAX,0x4
005bac15  CMP EAX,dword ptr [EBP + 0x10]
005bac18  JNC 0x005bae72
005bac1e  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bac24  MOV EDX,dword ptr [ECX + 0x8]
005bac27  MOV dword ptr [EBP + 0xfffffeb4],EDX
005bac2d  MOV EAX,dword ptr [EBP + 0x10]
005bac30  SHL EAX,0x4
005bac33  ADD EAX,dword ptr [EBP + 0xc]
005bac36  MOV dword ptr [EBP + 0xfffffeb8],EAX
005bac3c  MOV ECX,dword ptr [EBP + 0xfffffeb4]
005bac42  MOV dword ptr [EBP + 0xfffffebc],ECX
005bac48  MOV EDX,dword ptr [EBP + 0xc]
005bac4b  MOV dword ptr [EBP + 0xfffffec0],EDX
005bac51  XOR EAX,EAX
005bac53  MOV byte ptr [EBP + 0xfffffedb],AL
005bac59  MOV CL,byte ptr [EBP + 0xfffffed9]
005bac5f  MOV byte ptr [EBP + 0xfffffeda],CL
005bac65  MOV EDX,dword ptr [EBP + 0xfffffebc]
005bac6b  MOV dword ptr [EBP + 0xfffffed4],EDX
005bac71  MOV EAX,dword ptr [EBP + 0xfffffec0]
005bac77  MOV dword ptr [EBP + 0xfffffecc],EAX
005bac7d  MOV CL,byte ptr [EBP + 0xfffffedb]
005bac83  MOV byte ptr [EBP + 0xfffffec7],CL
005bac89  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bac8f  MOV dword ptr [EBP + 0xfffffec8],EDX
005bac95  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005bac9b  PUSH EAX
005bac9c  MOV ECX,dword ptr [EBP + 0xfffffec8]
005baca2  PUSH ECX
005baca3  MOV EDX,dword ptr [EBP + 0xfffffed4]
005baca9  PUSH EDX
005bacaa  MOV EAX,dword ptr [EBP + 0xfffffecc]
005bacb0  PUSH EAX
005bacb1  CALL 0x005bc5d0
005bacb6  ADD ESP,0x10
005bacb9  MOV byte ptr [EBP + -0x4],0x4
005bacbd  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bacc3  MOV EDX,dword ptr [ECX + 0x8]
005bacc6  SUB EDX,dword ptr [EBP + 0xc]
005bacc9  SAR EDX,0x4
005baccc  MOV EAX,dword ptr [EBP + 0x10]
005baccf  SUB EAX,EDX
005bacd1  MOV dword ptr [EBP + 0xfffffea4],EAX
005bacd7  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bacdd  MOV EDX,dword ptr [ECX + 0x8]
005bace0  MOV dword ptr [EBP + 0xfffffea8],EDX
005bace6  MOV EAX,dword ptr [EBP + 0xfffffea8]
005bacec  MOV dword ptr [EBP + 0xfffffeac],EAX
005bacf2  XOR ECX,ECX
005bacf4  MOV byte ptr [EBP + 0xfffffeb3],CL
005bacfa  MOV DL,byte ptr [EBP + 0xfffffeb1]
005bad00  MOV byte ptr [EBP + 0xfffffeb2],DL
005bad06  MOV AL,byte ptr [EBP + 0xfffffeb3]
005bad0c  PUSH EAX
005bad0d  MOV CL,byte ptr [EBP + 0xfffffeb2]
005bad13  PUSH ECX
005bad14  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005bad1a  PUSH EDX
005bad1b  LEA EAX,[EBP + -0x20]
005bad1e  PUSH EAX
005bad1f  MOV ECX,dword ptr [EBP + 0xfffffea4]
005bad25  PUSH ECX
005bad26  MOV EDX,dword ptr [EBP + 0xfffffeac]
005bad2c  PUSH EDX
005bad2d  CALL 0x005bbf70
005bad32  ADD ESP,0x18
005bad35  JMP 0x005bade6
005bae72  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005bae78  MOV EAX,dword ptr [EDX + 0x8]
005bae7b  MOV dword ptr [EBP + -0x30],EAX
005bae7e  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bae84  MOV EDX,dword ptr [ECX + 0x8]
005bae87  MOV dword ptr [EBP + 0xfffffe24],EDX
005bae8d  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005bae93  PUSH EAX
005bae94  MOV ECX,dword ptr [EBP + 0xfffffe24]
005bae9a  PUSH ECX
005bae9b  MOV EDX,dword ptr [EBP + -0x30]
005bae9e  PUSH EDX
005bae9f  MOV EAX,dword ptr [EBP + 0x10]
005baea2  SHL EAX,0x4
005baea5  MOV ECX,dword ptr [EBP + -0x30]
005baea8  SUB ECX,EAX
005baeaa  PUSH ECX
005baeab  CALL 0x005bbe20
005baeb0  ADD ESP,0x10
005baeb3  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005baeb9  MOV dword ptr [EDX + 0x8],EAX
005baebc  MOV EAX,dword ptr [EBP + -0x30]
005baebf  MOV dword ptr [EBP + 0xfffffdec],EAX
005baec5  MOV ECX,dword ptr [EBP + 0x10]
005baec8  SHL ECX,0x4
005baecb  MOV EDX,dword ptr [EBP + -0x30]
005baece  SUB EDX,ECX
005baed0  MOV dword ptr [EBP + 0xfffffdf0],EDX
005baed6  MOV EAX,dword ptr [EBP + 0xc]
005baed9  MOV dword ptr [EBP + 0xfffffdf4],EAX
005baedf  XOR ECX,ECX
005baee1  MOV byte ptr [EBP + 0xfffffe23],CL
005baee7  MOV DL,byte ptr [EBP + 0xfffffe20]
005baeed  MOV byte ptr [EBP + 0xfffffe22],DL
005baef3  MOV EAX,dword ptr [EBP + 0xfffffdf0]
005baef9  MOV dword ptr [EBP + 0xfffffe18],EAX
005baeff  MOV ECX,dword ptr [EBP + 0xfffffdf4]
005baf05  MOV dword ptr [EBP + 0xfffffe10],ECX
005baf0b  MOV DL,byte ptr [EBP + 0xfffffe23]
005baf11  PUSH EDX
005baf12  MOV AL,byte ptr [EBP + 0xfffffe22]
005baf18  PUSH EAX
005baf19  MOV CL,byte ptr [EBP + 0xfffffe21]
005baf1f  PUSH ECX
005baf20  MOV EDX,dword ptr [EBP + 0xfffffdec]
005baf26  PUSH EDX
005baf27  MOV EAX,dword ptr [EBP + 0xfffffe18]
005baf2d  PUSH EAX
005baf2e  MOV ECX,dword ptr [EBP + 0xfffffe10]
005baf34  PUSH ECX
005baf35  CALL 0x005bbea0
005baf3a  ADD ESP,0x18
005baf3d  MOV EDX,dword ptr [EBP + 0x10]
005baf40  SHL EDX,0x4
005baf43  ADD EDX,dword ptr [EBP + 0xc]
005baf46  MOV dword ptr [EBP + 0xfffffdd4],EDX
005baf4c  MOV EAX,dword ptr [EBP + 0xc]
005baf4f  MOV dword ptr [EBP + 0xfffffdd8],EAX
005baf55  MOV ECX,dword ptr [EBP + 0xfffffdd4]
005baf5b  MOV dword ptr [EBP + 0xfffffde4],ECX
005baf61  MOV EDX,dword ptr [EBP + 0xfffffdd8]
005baf67  MOV dword ptr [EBP + 0xfffffddc],EDX
005baf6d  JMP 0x005baf7e
005baf6f  MOV EAX,dword ptr [EBP + 0xfffffddc]
005baf75  ADD EAX,0x10
005baf78  MOV dword ptr [EBP + 0xfffffddc],EAX
005baf7e  MOV ECX,dword ptr [EBP + 0xfffffddc]
005baf84  CMP ECX,dword ptr [EBP + 0xfffffde4]
005baf8a  JZ 0x005baf9d
005baf8c  LEA EDX,[EBP + -0x20]
005baf8f  PUSH EDX
005baf90  MOV ECX,dword ptr [EBP + 0xfffffddc]
005baf96  CALL 0x005bc040
005baf9b  JMP 0x005baf6f
