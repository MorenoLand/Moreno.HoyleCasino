; FUN_0045c680  0045c680
0045c680  PUSH EBP
0045c681  MOV EBP,ESP
0045c683  SUB ESP,0x12c
0045c689  PUSH ESI
0045c68a  MOV dword ptr [EBP + 0xffffff10],ECX
0045c690  MOV dword ptr [EBP + -0x4c],0xffffffff
0045c697  MOV dword ptr [EBP + -0x20],0xffffffff
0045c69e  MOV dword ptr [EBP + -0x54],0xffffffff
0045c6a5  MOV dword ptr [EBP + -0x1c],0xffffffff
0045c6ac  MOV dword ptr [EBP + -0x58],0xffffffff
0045c6b3  FLDZ
0045c6b5  FSTP double ptr [EBP + -0x18]
0045c6b8  FLD1
0045c6ba  FSTP double ptr [EBP + -0x10]
0045c6bd  MOV EAX,[0x00790738]
0045c6c2  MOV ECX,dword ptr [EAX + 0x104]
0045c6c8  MOV dword ptr [EBP + -0x4],ECX
0045c6cb  CMP dword ptr [EBP + -0x4],0x0
0045c6cf  JL 0x0045c730
0045c6d1  CMP dword ptr [EBP + -0x4],0x3
0045c6d5  JG 0x0045c730
0045c6d7  MOV EDX,dword ptr [EBP + -0x4]
0045c6da  PUSH EDX
0045c6db  CALL 0x005dcb00
0045c6e0  ADD ESP,0x4
0045c6e3  MOV dword ptr [EBP + -0x64],EAX
0045c6e6  MOV ECX,dword ptr [EBP + -0x64]
0045c6e9  CALL 0x0063aac0
0045c6ee  MOV EAX,dword ptr [EAX]
0045c6f0  MOV dword ptr [EBP + -0x5c],EAX
0045c6f3  CMP dword ptr [EBP + -0x5c],0x2
0045c6f7  JZ 0x0045c718
0045c6f9  MOV ECX,dword ptr [EBP + -0x64]
0045c6fc  CALL 0x0063aac0
0045c701  MOV ECX,dword ptr [EAX]
0045c703  MOV dword ptr [EBP + -0x60],ECX
0045c706  CMP dword ptr [EBP + -0x60],0x3
0045c70a  JZ 0x0045c718
0045c70c  MOV dword ptr [EBP + 0xffffff0c],0x0
0045c716  JMP 0x0045c722
0045c718  MOV dword ptr [EBP + 0xffffff0c],0x1
0045c722  MOV DL,byte ptr [EBP + 0xffffff0c]
0045c728  MOV byte ptr [EBP + 0xffffff0b],DL
0045c72e  JMP 0x0045c737
0045c730  MOV byte ptr [EBP + 0xffffff0b],0x0
0045c737  MOV AL,byte ptr [EBP + 0xffffff0b]
0045c73d  MOV byte ptr [EBP + -0x5],AL
0045c740  MOV dword ptr [EBP + -0x48],0xffffffff
0045c747  MOV dword ptr [EBP + -0x50],0xffffffff
0045c74e  MOV byte ptr [EBP + -0x41],0x1
0045c752  MOV ECX,dword ptr [0x00790738]
0045c758  MOV EDX,dword ptr [ECX + 0x128]
0045c75e  MOV dword ptr [EBP + -0x4c],EDX
0045c761  MOV EAX,dword ptr [EBP + -0x68]
0045c764  MOV dword ptr [EBP + 0xffffff04],EAX
0045c76a  MOV ECX,dword ptr [0x00790738]
0045c770  MOV EDX,dword ptr [ECX + 0x124]
0045c776  MOV dword ptr [EBP + 0xffffff04],EDX
0045c77c  CMP dword ptr [EBP + 0xffffff04],0x5
0045c783  JA 0x0045cfc0
0045c789  MOV EAX,dword ptr [EBP + 0xffffff04]
0045c78f  JMP dword ptr [EAX*0x4 + 0x45d1a4]
0045c796  MOV byte ptr [EBP + -0x41],0x0
0045c79a  MOV ECX,dword ptr [EBP + -0x4]
0045c79d  PUSH ECX
0045c79e  CALL 0x005dcb00
0045c7a3  ADD ESP,0x4
0045c7a6  MOV dword ptr [EBP + -0x74],EAX
0045c7a9  MOV ECX,dword ptr [EBP + -0x74]
0045c7ac  CALL 0x0063aac0
0045c7b1  MOV EDX,dword ptr [EAX]
0045c7b3  MOV dword ptr [EBP + -0x6c],EDX
0045c7b6  CMP dword ptr [EBP + -0x6c],0x2
0045c7ba  JZ 0x0045c7db
0045c7bc  MOV ECX,dword ptr [EBP + -0x74]
0045c7bf  CALL 0x0063aac0
0045c7c4  MOV EAX,dword ptr [EAX]
0045c7c6  MOV dword ptr [EBP + -0x70],EAX
0045c7c9  CMP dword ptr [EBP + -0x70],0x3
0045c7cd  JZ 0x0045c7db
0045c7cf  MOV dword ptr [EBP + 0xffffff00],0x0
0045c7d9  JMP 0x0045c7e5
0045c7db  MOV dword ptr [EBP + 0xffffff00],0x1
0045c7e5  MOVZX ECX,byte ptr [EBP + 0xffffff00]
0045c7ec  TEST ECX,ECX
0045c7ee  JNZ 0x0045c85c
0045c7f0  MOV EDX,dword ptr [EBP + -0x4]
0045c7f3  PUSH EDX
0045c7f4  MOV ECX,dword ptr [0x00790744]
0045c7fa  CALL 0x0044eaf0
0045c7ff  MOVZX EAX,AL
0045c802  TEST EAX,EAX
0045c804  JZ 0x0045c826
0045c806  MOV dword ptr [EBP + -0x1c],0x7f3
0045c80d  MOV dword ptr [EBP + -0x58],0x404
0045c814  FLD double ptr [0x006b3e40]
0045c81a  FSTP double ptr [EBP + -0x18]
0045c81d  FLD double ptr [0x006b2c40]
0045c823  FSTP double ptr [EBP + -0x10]
0045c826  MOV ECX,dword ptr [EBP + -0x4]
0045c829  PUSH ECX
0045c82a  MOV ECX,dword ptr [0x00790744]
0045c830  CALL 0x0044ebc0
0045c835  MOVZX EDX,AL
0045c838  TEST EDX,EDX
0045c83a  JZ 0x0045c85c
0045c83c  MOV dword ptr [EBP + -0x1c],0x7f4
0045c843  MOV dword ptr [EBP + -0x58],0x402
0045c84a  FLD double ptr [0x006b3e40]
0045c850  FSTP double ptr [EBP + -0x18]
0045c853  FLD double ptr [0x006b2c40]
0045c859  FSTP double ptr [EBP + -0x10]
0045c85c  JMP 0x0045cfc0
0045c861  CMP dword ptr [EBP + -0x4],0x4
0045c865  JZ 0x0045c86d
0045c867  CMP dword ptr [EBP + -0x4],-0x1
0045c86b  JNZ 0x0045c872
0045c86d  JMP 0x0045cfc0
0045c872  MOV EAX,dword ptr [EBP + -0x4]
0045c875  PUSH EAX
0045c876  MOV ECX,dword ptr [0x00790744]
0045c87c  CALL 0x0044eaf0
0045c881  MOVZX ECX,AL
0045c884  TEST ECX,ECX
0045c886  JZ 0x0045c992
0045c88c  MOV EDX,dword ptr [EBP + -0x4]
0045c88f  PUSH EDX
0045c890  MOV ECX,dword ptr [0x00790738]
0045c896  CALL 0x004605c0
0045c89b  TEST EAX,EAX
0045c89d  JNZ 0x0045c992
0045c8a3  MOV EAX,dword ptr [EBP + -0x4]
0045c8a6  PUSH EAX
0045c8a7  CALL 0x005dcb00
0045c8ac  ADD ESP,0x4
0045c8af  MOV dword ptr [EBP + -0x80],EAX
0045c8b2  MOV ECX,dword ptr [EBP + -0x80]
0045c8b5  CALL 0x0063aac0
0045c8ba  MOV ECX,dword ptr [EAX]
0045c8bc  MOV dword ptr [EBP + -0x78],ECX
0045c8bf  CMP dword ptr [EBP + -0x78],0x2
0045c8c3  JZ 0x0045c8e4
0045c8c5  MOV ECX,dword ptr [EBP + -0x80]
0045c8c8  CALL 0x0063aac0
0045c8cd  MOV EDX,dword ptr [EAX]
0045c8cf  MOV dword ptr [EBP + -0x7c],EDX
0045c8d2  CMP dword ptr [EBP + -0x7c],0x3
0045c8d6  JZ 0x0045c8e4
0045c8d8  MOV dword ptr [EBP + 0xfffffefc],0x0
0045c8e2  JMP 0x0045c8ee
0045c8e4  MOV dword ptr [EBP + 0xfffffefc],0x1
0045c8ee  MOVZX EAX,byte ptr [EBP + 0xfffffefc]
0045c8f5  NEG EAX
0045c8f7  SBB EAX,EAX
0045c8f9  AND EAX,0x4
0045c8fc  ADD EAX,0x7f5
0045c901  MOV dword ptr [EBP + -0x1c],EAX
0045c904  MOV ECX,dword ptr [EBP + -0x4]
0045c907  PUSH ECX
0045c908  CALL 0x005dcb00
0045c90d  ADD ESP,0x4
0045c910  MOV dword ptr [EBP + 0xffffff74],EAX
0045c916  MOV ECX,dword ptr [EBP + 0xffffff74]
0045c91c  CALL 0x0063aac0
0045c921  MOV EDX,dword ptr [EAX]
0045c923  MOV dword ptr [EBP + 0xffffff7c],EDX
0045c929  CMP dword ptr [EBP + 0xffffff7c],0x2
0045c930  JZ 0x0045c95a
0045c932  MOV ECX,dword ptr [EBP + 0xffffff74]
0045c938  CALL 0x0063aac0
0045c93d  MOV EAX,dword ptr [EAX]
0045c93f  MOV dword ptr [EBP + 0xffffff78],EAX
0045c945  CMP dword ptr [EBP + 0xffffff78],0x3
0045c94c  JZ 0x0045c95a
0045c94e  MOV dword ptr [EBP + 0xfffffef8],0x0
0045c958  JMP 0x0045c964
0045c95a  MOV dword ptr [EBP + 0xfffffef8],0x1
0045c964  MOVZX ECX,byte ptr [EBP + 0xfffffef8]
0045c96b  NEG ECX
0045c96d  SBB ECX,ECX
0045c96f  AND ECX,0x19
0045c972  ADD ECX,0x3f6
0045c978  MOV dword ptr [EBP + -0x58],ECX
0045c97b  FLD double ptr [0x006b3e40]
0045c981  FSTP double ptr [EBP + -0x18]
0045c984  FLD double ptr [0x006b2c40]
0045c98a  FSTP double ptr [EBP + -0x10]
0045c98d  JMP 0x0045cbc8
0045c992  MOV EDX,dword ptr [EBP + -0x4]
0045c995  PUSH EDX
0045c996  MOV ECX,dword ptr [0x00790744]
0045c99c  CALL 0x0044ebc0
0045c9a1  MOVZX EAX,AL
0045c9a4  TEST EAX,EAX
0045c9a6  JZ 0x0045c9fa
0045c9a8  MOV ECX,dword ptr [EBP + -0x4]
0045c9ab  PUSH ECX
0045c9ac  MOV ECX,dword ptr [0x00790738]
0045c9b2  CALL 0x004605c0
0045c9b7  CMP EAX,0x1
0045c9ba  JNZ 0x0045c9fa
0045c9bc  MOVZX EDX,byte ptr [EBP + -0x5]
0045c9c0  NEG EDX
0045c9c2  SBB EDX,EDX
0045c9c4  AND EDX,0x4
0045c9c7  ADD EDX,0x7f8
0045c9cd  MOV dword ptr [EBP + -0x1c],EDX
0045c9d0  MOVZX EAX,byte ptr [EBP + -0x5]
0045c9d4  NEG EAX
0045c9d6  SBB EAX,EAX
0045c9d8  AND EAX,0x19
0045c9db  ADD EAX,0x3f4
0045c9e0  MOV dword ptr [EBP + -0x58],EAX
0045c9e3  FLD double ptr [0x006b3e40]
0045c9e9  FSTP double ptr [EBP + -0x18]
0045c9ec  FLD double ptr [0x006b2c40]
0045c9f2  FSTP double ptr [EBP + -0x10]
0045c9f5  JMP 0x0045cbc8
0045c9fa  MOV ECX,dword ptr [EBP + -0x4]
0045c9fd  PUSH ECX
0045c9fe  MOV ECX,dword ptr [0x00790738]
0045ca04  CALL 0x004605c0
0045ca09  CMP EAX,0x1
0045ca0c  JNZ 0x0045ca4e
0045ca0e  MOVZX EDX,byte ptr [EBP + -0x5]
0045ca12  NEG EDX
0045ca14  SBB EDX,EDX
0045ca16  AND EDX,0xfffffff4
0045ca19  ADD EDX,0x3fc
0045ca1f  MOV dword ptr [EBP + -0x1c],EDX
0045ca22  MOVZX EAX,byte ptr [EBP + -0x5]
0045ca26  NEG EAX
0045ca28  SBB EAX,EAX
0045ca2a  AND EAX,0xfffffbfb
0045ca2f  ADD EAX,0x404
0045ca34  MOV dword ptr [EBP + -0x58],EAX
0045ca37  FLD double ptr [0x006b2c38]
0045ca3d  FSTP double ptr [EBP + -0x18]
0045ca40  FLD double ptr [0x006b2c38]
0045ca46  FSTP double ptr [EBP + -0x10]
0045ca49  JMP 0x0045cbc8
0045ca4e  MOV ECX,dword ptr [EBP + -0x4]
0045ca51  PUSH ECX
0045ca52  MOV ECX,dword ptr [0x00790738]
0045ca58  CALL 0x004605c0
0045ca5d  TEST EAX,EAX
0045ca5f  JNZ 0x0045cbc8
0045ca65  MOVZX EDX,byte ptr [EBP + -0x5]
0045ca69  TEST EDX,EDX
0045ca6b  JZ 0x0045cae3
0045ca6d  MOV EAX,dword ptr [EBP + -0x4]
0045ca70  PUSH EAX
0045ca71  CALL 0x005dcb00
0045ca76  ADD ESP,0x4
0045ca79  MOV ECX,EAX
0045ca7b  CALL 0x005d5a50
0045ca80  MOV ESI,EAX
0045ca82  MOV ECX,dword ptr [0x00790734]
0045ca88  MOV EDX,dword ptr [ECX]
0045ca8a  MOV ECX,dword ptr [0x00790734]
0045ca90  MOV EAX,dword ptr [EDX + 0x2b0]
0045ca96  CALL EAX
0045ca98  CMP ESI,EAX
0045ca9a  JLE 0x0045cae3
0045ca9c  MOV ECX,dword ptr [EBP + -0x4]
0045ca9f  PUSH ECX
0045caa0  CALL 0x005dcb00
0045caa5  ADD ESP,0x4
0045caa8  MOV ECX,EAX
0045caaa  CALL 0x005d5a50
0045caaf  MOV ESI,EAX
0045cab1  MOV EDX,dword ptr [0x00790734]
0045cab7  MOV EAX,dword ptr [EDX]
0045cab9  MOV ECX,dword ptr [0x00790734]
0045cabf  MOV EDX,dword ptr [EAX + 0x2b0]
0045cac5  CALL EDX
0045cac7  IMUL EAX,EAX,0xa
0045caca  CMP ESI,EAX
0045cacc  JGE 0x0045cae3
0045cace  MOV dword ptr [EBP + -0x1c],0x410
0045cad5  FLD double ptr [0x006b2c40]
0045cadb  FSTP double ptr [EBP + -0x10]
0045cade  JMP 0x0045cbc8
0045cae3  MOV EAX,dword ptr [EBP + -0x4]
0045cae6  PUSH EAX
0045cae7  CALL 0x005dcb00
0045caec  ADD ESP,0x4
0045caef  MOV ECX,EAX
0045caf1  CALL 0x005d5a50
0045caf6  TEST EAX,EAX
0045caf8  JNZ 0x0045cb40
0045cafa  MOV ECX,dword ptr [EBP + -0x4]
0045cafd  PUSH ECX
0045cafe  CALL 0x005dcb00
0045cb03  ADD ESP,0x4
0045cb06  MOV ECX,EAX
0045cb08  CALL 0x005d5a70
0045cb0d  TEST EAX,EAX
0045cb0f  JNZ 0x0045cb40
0045cb11  MOVZX EDX,byte ptr [EBP + -0x5]
0045cb15  TEST EDX,EDX
0045cb17  JZ 0x0045cb2b
0045cb19  MOV dword ptr [EBP + -0x1c],0x40e
0045cb20  FLD double ptr [0x006b2c40]
0045cb26  FSTP double ptr [EBP + -0x10]
0045cb29  JMP 0x0045cb3b
0045cb2b  MOV dword ptr [EBP + -0x1c],0x3f5
0045cb32  FLD double ptr [0x006b2c40]
0045cb38  FSTP double ptr [EBP + -0x10]
0045cb3b  JMP 0x0045cbc8
0045cb40  MOV EAX,dword ptr [EBP + -0x4]
0045cb43  PUSH EAX
0045cb44  CALL 0x005dcb00
0045cb49  ADD ESP,0x4
0045cb4c  MOV dword ptr [EBP + 0xffffff68],EAX
0045cb52  MOV ECX,dword ptr [EBP + 0xffffff68]
0045cb58  CALL 0x0063aac0
0045cb5d  MOV ECX,dword ptr [EAX]
0045cb5f  MOV dword ptr [EBP + 0xffffff70],ECX
0045cb65  CMP dword ptr [EBP + 0xffffff70],0x2
0045cb6c  JZ 0x0045cb96
0045cb6e  MOV ECX,dword ptr [EBP + 0xffffff68]
0045cb74  CALL 0x0063aac0
0045cb79  MOV EDX,dword ptr [EAX]
0045cb7b  MOV dword ptr [EBP + 0xffffff6c],EDX
0045cb81  CMP dword ptr [EBP + 0xffffff6c],0x3
0045cb88  JZ 0x0045cb96
0045cb8a  MOV dword ptr [EBP + 0xfffffef4],0x0
0045cb94  JMP 0x0045cba0
0045cb96  MOV dword ptr [EBP + 0xfffffef4],0x1
0045cba0  MOVZX EAX,byte ptr [EBP + 0xfffffef4]
0045cba7  NEG EAX
0045cba9  SBB EAX,EAX
0045cbab  AND EAX,0xffffffe6
0045cbae  ADD EAX,0x402
0045cbb3  MOV dword ptr [EBP + -0x1c],EAX
0045cbb6  FLD double ptr [0x006b2c38]
0045cbbc  FSTP double ptr [EBP + -0x10]
0045cbbf  FLD double ptr [0x006b2c38]
0045cbc5  FSTP double ptr [EBP + -0x18]
0045cbc8  JMP 0x0045cfc0
0045cbcd  MOV ECX,dword ptr [0x00790734]
0045cbd3  CALL 0x005db190
0045cbd8  MOVZX ECX,AL
0045cbdb  TEST ECX,ECX
0045cbdd  JZ 0x0045cc98
0045cbe3  MOV ECX,dword ptr [0x00790734]
0045cbe9  CALL 0x005dac90
0045cbee  CMP EAX,-0x1
0045cbf1  JNZ 0x0045cbf8
0045cbf3  JMP 0x0045cfc0
0045cbf8  MOV ECX,dword ptr [0x00790734]
0045cbfe  CALL 0x005dac90
0045cc03  PUSH EAX
0045cc04  CALL 0x005dcb00
0045cc09  ADD ESP,0x4
0045cc0c  MOV dword ptr [EBP + 0xffffff5c],EAX
0045cc12  MOV ECX,dword ptr [EBP + 0xffffff5c]
0045cc18  CALL 0x0063aac0
0045cc1d  MOV EDX,dword ptr [EAX]
0045cc1f  MOV dword ptr [EBP + 0xffffff64],EDX
0045cc25  CMP dword ptr [EBP + 0xffffff64],0x2
0045cc2c  JZ 0x0045cc56
0045cc2e  MOV ECX,dword ptr [EBP + 0xffffff5c]
0045cc34  CALL 0x0063aac0
0045cc39  MOV EAX,dword ptr [EAX]
0045cc3b  MOV dword ptr [EBP + 0xffffff60],EAX
0045cc41  CMP dword ptr [EBP + 0xffffff60],0x3
0045cc48  JZ 0x0045cc56
0045cc4a  MOV dword ptr [EBP + 0xfffffef0],0x0
0045cc54  JMP 0x0045cc60
0045cc56  MOV dword ptr [EBP + 0xfffffef0],0x1
0045cc60  MOVZX ECX,byte ptr [EBP + 0xfffffef0]
0045cc67  TEST ECX,ECX
0045cc69  JNZ 0x0045cc87
0045cc6b  MOV ECX,dword ptr [0x00790734]
0045cc71  CALL 0x005dac90
0045cc76  MOV dword ptr [EBP + -0x4c],EAX
0045cc79  MOV dword ptr [EBP + -0x1c],0x3fd
0045cc80  FLD1
0045cc82  FSTP double ptr [EBP + -0x10]
0045cc85  JMP 0x0045cc93
0045cc87  MOV dword ptr [EBP + -0x1c],0x412
0045cc8e  FLD1
0045cc90  FSTP double ptr [EBP + -0x10]
0045cc93  JMP 0x0045cef0
0045cc98  MOV EDX,dword ptr [0x007947e0]
0045cc9e  CMP dword ptr [EDX + 0x4ef8],0x2
0045cca5  JLE 0x0045cef0
0045ccab  MOV ECX,dword ptr [0x00790734]
0045ccb1  CALL 0x005dada0
0045ccb6  MOV dword ptr [EBP + -0x50],EAX
0045ccb9  MOV ECX,dword ptr [0x00790734]
0045ccbf  CALL 0x005dac90
0045ccc4  MOV dword ptr [EBP + -0x48],EAX
0045ccc7  CMP dword ptr [EBP + -0x48],-0x1
0045cccb  JZ 0x0045cdde
0045ccd1  MOV EAX,dword ptr [EBP + -0x48]
0045ccd4  PUSH EAX
0045ccd5  MOV ECX,dword ptr [0x00790738]
0045ccdb  CALL 0x004605c0
0045cce0  CMP EAX,0x1
0045cce3  JNZ 0x0045cdde
0045cce9  MOV ECX,dword ptr [EBP + -0x48]
0045ccec  PUSH ECX
0045cced  CALL 0x005dcb00
0045ccf2  ADD ESP,0x4
0045ccf5  MOV dword ptr [EBP + 0xffffff50],EAX
0045ccfb  MOV ECX,dword ptr [EBP + 0xffffff50]
0045cd01  CALL 0x0063aac0
0045cd06  MOV EDX,dword ptr [EAX]
0045cd08  MOV dword ptr [EBP + 0xffffff58],EDX
0045cd0e  CMP dword ptr [EBP + 0xffffff58],0x2
0045cd15  JZ 0x0045cd3f
0045cd17  MOV ECX,dword ptr [EBP + 0xffffff50]
0045cd1d  CALL 0x0063aac0
0045cd22  MOV EAX,dword ptr [EAX]
0045cd24  MOV dword ptr [EBP + 0xffffff54],EAX
0045cd2a  CMP dword ptr [EBP + 0xffffff54],0x3
0045cd31  JZ 0x0045cd3f
0045cd33  MOV dword ptr [EBP + 0xfffffeec],0x0
0045cd3d  JMP 0x0045cd49
0045cd3f  MOV dword ptr [EBP + 0xfffffeec],0x1
0045cd49  MOVZX ECX,byte ptr [EBP + 0xfffffeec]
0045cd50  TEST ECX,ECX
0045cd52  JNZ 0x0045cd5a
0045cd54  MOV EDX,dword ptr [EBP + -0x48]
0045cd57  MOV dword ptr [EBP + -0x4c],EDX
0045cd5a  MOV EAX,dword ptr [EBP + -0x48]
0045cd5d  PUSH EAX
0045cd5e  CALL 0x005dcb00
0045cd63  ADD ESP,0x4
0045cd66  MOV dword ptr [EBP + 0xffffff44],EAX
0045cd6c  MOV ECX,dword ptr [EBP + 0xffffff44]
0045cd72  CALL 0x0063aac0
0045cd77  MOV ECX,dword ptr [EAX]
0045cd79  MOV dword ptr [EBP + 0xffffff4c],ECX
0045cd7f  CMP dword ptr [EBP + 0xffffff4c],0x2
0045cd86  JZ 0x0045cdb0
0045cd88  MOV ECX,dword ptr [EBP + 0xffffff44]
0045cd8e  CALL 0x0063aac0
0045cd93  MOV EDX,dword ptr [EAX]
0045cd95  MOV dword ptr [EBP + 0xffffff48],EDX
0045cd9b  CMP dword ptr [EBP + 0xffffff48],0x3
0045cda2  JZ 0x0045cdb0
0045cda4  MOV dword ptr [EBP + 0xfffffee8],0x0
0045cdae  JMP 0x0045cdba
0045cdb0  MOV dword ptr [EBP + 0xfffffee8],0x1
0045cdba  MOVZX EAX,byte ptr [EBP + 0xfffffee8]
0045cdc1  NEG EAX
0045cdc3  SBB EAX,EAX
0045cdc5  AND EAX,0x19
0045cdc8  ADD EAX,0x3f2
0045cdcd  MOV dword ptr [EBP + -0x1c],EAX
0045cdd0  FLD double ptr [0x006b2c38]
0045cdd6  FSTP double ptr [EBP + -0x10]
0045cdd9  JMP 0x0045cef0
0045cdde  CMP dword ptr [EBP + -0x50],-0x1
0045cde2  JZ 0x0045cef0
0045cde8  MOV ECX,dword ptr [EBP + -0x50]
0045cdeb  PUSH ECX
0045cdec  MOV ECX,dword ptr [0x00790738]
0045cdf2  CALL 0x004605c0
0045cdf7  TEST EAX,EAX
0045cdf9  JNZ 0x0045cef0
0045cdff  MOV EDX,dword ptr [EBP + -0x50]
0045ce02  PUSH EDX
0045ce03  CALL 0x005dcb00
0045ce08  ADD ESP,0x4
0045ce0b  MOV dword ptr [EBP + 0xffffff38],EAX
0045ce11  MOV ECX,dword ptr [EBP + 0xffffff38]
0045ce17  CALL 0x0063aac0
0045ce1c  MOV EAX,dword ptr [EAX]
0045ce1e  MOV dword ptr [EBP + 0xffffff40],EAX
0045ce24  CMP dword ptr [EBP + 0xffffff40],0x2
0045ce2b  JZ 0x0045ce55
0045ce2d  MOV ECX,dword ptr [EBP + 0xffffff38]
0045ce33  CALL 0x0063aac0
0045ce38  MOV ECX,dword ptr [EAX]
0045ce3a  MOV dword ptr [EBP + 0xffffff3c],ECX
0045ce40  CMP dword ptr [EBP + 0xffffff3c],0x3
0045ce47  JZ 0x0045ce55
0045ce49  MOV dword ptr [EBP + 0xfffffee4],0x0
0045ce53  JMP 0x0045ce5f
0045ce55  MOV dword ptr [EBP + 0xfffffee4],0x1
0045ce5f  MOVZX EDX,byte ptr [EBP + 0xfffffee4]
0045ce66  TEST EDX,EDX
0045ce68  JNZ 0x0045ce70
0045ce6a  MOV EAX,dword ptr [EBP + -0x50]
0045ce6d  MOV dword ptr [EBP + -0x4c],EAX
0045ce70  MOV ECX,dword ptr [EBP + -0x50]
0045ce73  PUSH ECX
0045ce74  CALL 0x005dcb00
0045ce79  ADD ESP,0x4
0045ce7c  MOV dword ptr [EBP + 0xffffff2c],EAX
0045ce82  MOV ECX,dword ptr [EBP + 0xffffff2c]
0045ce88  CALL 0x0063aac0
0045ce8d  MOV EDX,dword ptr [EAX]
0045ce8f  MOV dword ptr [EBP + 0xffffff34],EDX
0045ce95  CMP dword ptr [EBP + 0xffffff34],0x2
0045ce9c  JZ 0x0045cec6
0045ce9e  MOV ECX,dword ptr [EBP + 0xffffff2c]
0045cea4  CALL 0x0063aac0
0045cea9  MOV EAX,dword ptr [EAX]
0045ceab  MOV dword ptr [EBP + 0xffffff30],EAX
0045ceb1  CMP dword ptr [EBP + 0xffffff30],0x3
0045ceb8  JZ 0x0045cec6
0045ceba  MOV dword ptr [EBP + 0xfffffee0],0x0
0045cec4  JMP 0x0045ced0
0045cec6  MOV dword ptr [EBP + 0xfffffee0],0x1
0045ced0  MOVZX ECX,byte ptr [EBP + 0xfffffee0]
0045ced7  NEG ECX
0045ced9  SBB ECX,ECX
0045cedb  AND ECX,0x19
0045cede  ADD ECX,0x3f3
0045cee4  MOV dword ptr [EBP + -0x1c],ECX
0045cee7  FLD double ptr [0x006b2c38]
0045ceed  FSTP double ptr [EBP + -0x10]
0045cef0  JMP 0x0045cfc0
0045cef5  MOV dword ptr [EBP + -0x20],0xcb52
0045cefc  JMP 0x0045cfc0
0045cf01  MOV EDX,dword ptr [0x00790738]
0045cf07  MOV EAX,dword ptr [EDX + 0x10c]
0045cf0d  MOV dword ptr [EBP + 0xffffff28],EAX
0045cf13  CMP dword ptr [EBP + 0xffffff28],0x4
0045cf1a  JZ 0x0045cf21
0045cf1c  JMP 0x0045cfc0
0045cf21  PUSH 0x4
0045cf23  MOV ECX,dword ptr [0x00790744]
0045cf29  CALL 0x0044eaf0
0045cf2e  MOVZX ECX,AL
0045cf31  TEST ECX,ECX
0045cf33  JZ 0x0045cf3c
0045cf35  MOV dword ptr [EBP + -0x20],0xcc33
0045cf3c  PUSH 0x4
0045cf3e  MOV ECX,dword ptr [0x00790744]
0045cf44  CALL 0x0044ebc0
0045cf49  MOVZX EDX,AL
0045cf4c  TEST EDX,EDX
0045cf4e  JZ 0x0045cf57
0045cf50  MOV dword ptr [EBP + -0x20],0xcc4c
0045cf57  JMP 0x0045cfc0
0045cf59  MOV EAX,[0x00790738]
0045cf5e  MOV ECX,dword ptr [EAX + 0x10c]
0045cf64  MOV dword ptr [EBP + 0xffffff24],ECX
0045cf6a  CMP dword ptr [EBP + 0xffffff24],0x4
0045cf71  JZ 0x0045cf75
0045cf73  JMP 0x0045cfc0
0045cf75  MOV EDX,dword ptr [EBP + -0x4]
0045cf78  PUSH EDX
0045cf79  MOV ECX,dword ptr [0x00790738]
0045cf7f  CALL 0x004605c0
0045cf84  MOV dword ptr [EBP + 0xfffffedc],EAX
0045cf8a  CMP dword ptr [EBP + 0xfffffedc],0x0
0045cf91  JZ 0x0045cfb9
0045cf93  CMP dword ptr [EBP + 0xfffffedc],0x1
0045cf9a  JZ 0x0045cfa7
0045cf9c  CMP dword ptr [EBP + 0xfffffedc],0x2
0045cfa3  JZ 0x0045cfb0
0045cfa5  JMP 0x0045cfc0
0045cfa7  MOV dword ptr [EBP + -0x20],0xcc01
0045cfae  JMP 0x0045cfc0
0045cfb0  MOV dword ptr [EBP + -0x20],0xcbcf
0045cfb7  JMP 0x0045cfc0
0045cfb9  MOV dword ptr [EBP + -0x20],0xcb6b
0045cfc0  MOV EAX,[0x00790738]
0045cfc5  MOV dword ptr [EBP + 0xffffff20],EAX
0045cfcb  MOV ECX,dword ptr [EBP + 0xffffff20]
0045cfd1  MOV dword ptr [ECX + 0x124],0xffffffff
0045cfdb  MOV EDX,dword ptr [EBP + 0xffffff20]
0045cfe1  MOV dword ptr [EDX + 0x128],0xffffffff
0045cfeb  CMP dword ptr [EBP + -0x4c],0x4
0045cfef  JNZ 0x0045d066
0045cff1  CMP dword ptr [EBP + -0x20],-0x1
0045cff5  JNZ 0x0045d01a
0045cff7  PUSH 0x0
0045cff9  PUSH 0x1
0045cffb  MOV EAX,[0x0162ee80]
0045d000  MOV ECX,dword ptr [EAX + 0x4]
0045d003  MOV EDX,dword ptr [0x0162ee80]
0045d009  MOV EAX,dword ptr [EDX + 0x4]
0045d00c  MOV EDX,dword ptr [ECX]
0045d00e  MOV ECX,EAX
0045d010  MOV EAX,dword ptr [EDX + 0x8]
0045d013  CALL EAX
0045d015  JMP 0x0045d19f
0045d01a  CMP dword ptr [EBP + -0x54],-0x1
0045d01e  JNZ 0x0045d040
0045d020  PUSH 0x0
0045d022  MOV ECX,dword ptr [0x0162ee80]
0045d028  MOV EDX,dword ptr [ECX + 0x4]
0045d02b  PUSH EDX
0045d02c  MOV EAX,dword ptr [EBP + -0x20]
0045d02f  PUSH EAX
0045d030  MOV ECX,dword ptr [0x00790740]
0045d036  MOV ECX,dword ptr [ECX + 0x3c]
0045d039  CALL 0x005cd7c0
0045d03e  JMP 0x0045d061
0045d040  PUSH 0x0
0045d042  MOV EDX,dword ptr [0x0162ee80]
0045d048  MOV EAX,dword ptr [EDX + 0x4]
0045d04b  PUSH EAX
0045d04c  MOV ECX,dword ptr [EBP + -0x54]
0045d04f  PUSH ECX
0045d050  MOV EDX,dword ptr [EBP + -0x20]
0045d053  PUSH EDX
0045d054  MOV EAX,[0x00790740]
0045d059  MOV ECX,dword ptr [EAX + 0x3c]
0045d05c  CALL 0x005cd700
0045d061  JMP 0x0045d19f
0045d066  CMP dword ptr [EBP + -0x1c],-0x1
0045d06a  JZ 0x0045d0f4
0045d070  MOV ECX,dword ptr [0x0162ee84]
0045d076  CALL 0x00636730
0045d07b  TEST EAX,EAX
0045d07d  JZ 0x0045d0f4
0045d07f  CMP dword ptr [EBP + -0x4c],-0x1
0045d083  JLE 0x0045d116
0045d089  MOV ECX,dword ptr [EBP + -0x4c]
0045d08c  PUSH ECX
0045d08d  CALL 0x005dcb00
0045d092  ADD ESP,0x4
0045d095  MOV dword ptr [EBP + 0xffffff14],EAX
0045d09b  MOV ECX,dword ptr [EBP + 0xffffff14]
0045d0a1  CALL 0x0063aac0
0045d0a6  MOV EDX,dword ptr [EAX]
0045d0a8  MOV dword ptr [EBP + 0xffffff1c],EDX
0045d0ae  CMP dword ptr [EBP + 0xffffff1c],0x2
0045d0b5  JZ 0x0045d0df
0045d0b7  MOV ECX,dword ptr [EBP + 0xffffff14]
0045d0bd  CALL 0x0063aac0
0045d0c2  MOV EAX,dword ptr [EAX]
0045d0c4  MOV dword ptr [EBP + 0xffffff18],EAX
0045d0ca  CMP dword ptr [EBP + 0xffffff18],0x3
0045d0d1  JZ 0x0045d0df
0045d0d3  MOV dword ptr [EBP + 0xfffffed8],0x0
0045d0dd  JMP 0x0045d0e9
0045d0df  MOV dword ptr [EBP + 0xfffffed8],0x1
0045d0e9  MOVZX ECX,byte ptr [EBP + 0xfffffed8]
0045d0f0  TEST ECX,ECX
0045d0f2  JZ 0x0045d116
0045d0f4  PUSH 0x0
0045d0f6  PUSH 0x1
0045d0f8  MOV EDX,dword ptr [0x0162ee80]
0045d0fe  MOV EAX,dword ptr [EDX + 0x4]
0045d101  MOV ECX,dword ptr [0x0162ee80]
0045d107  MOV ECX,dword ptr [ECX + 0x4]
0045d10a  MOV EDX,dword ptr [EAX]
0045d10c  MOV EAX,dword ptr [EDX + 0x8]
0045d10f  CALL EAX
0045d111  JMP 0x0045d19f
0045d116  CMP dword ptr [EBP + -0x4c],-0x1
0045d11a  JZ 0x0045d127
0045d11c  MOV ECX,dword ptr [EBP + -0x4c]
0045d11f  MOV dword ptr [EBP + 0xfffffed4],ECX
0045d125  JMP 0x0045d138
0045d127  MOV ECX,dword ptr [0x0162ee84]
0045d12d  CALL 0x00636c50
0045d132  MOV dword ptr [EBP + 0xfffffed4],EAX
0045d138  MOV EDX,dword ptr [EBP + 0xfffffed4]
0045d13e  MOV dword ptr [EBP + -0x40],EDX
0045d141  MOV EAX,dword ptr [EBP + -0x1c]
0045d144  MOV dword ptr [EBP + -0x3c],EAX
0045d147  MOV ECX,dword ptr [EBP + -0x58]
0045d14a  MOV dword ptr [EBP + -0x38],ECX
0045d14d  FLD double ptr [EBP + -0x18]
0045d150  FSTP double ptr [EBP + -0x30]
0045d153  FLD double ptr [EBP + -0x10]
0045d156  FSTP double ptr [EBP + -0x28]
0045d159  PUSH 0x1
0045d15b  MOV EDX,dword ptr [0x0162ee80]
0045d161  MOV EAX,dword ptr [EDX + 0x4]
0045d164  MOV ECX,dword ptr [0x0162ee80]
0045d16a  MOV ECX,dword ptr [ECX + 0x4]
0045d16d  MOV EDX,dword ptr [EAX]
0045d16f  MOV EAX,dword ptr [EDX + 0x4]
0045d172  CALL EAX
0045d174  MOV CL,byte ptr [EBP + -0x41]
0045d177  PUSH ECX
0045d178  PUSH 0x2
0045d17a  MOV ECX,dword ptr [0x0162ee84]
0045d180  CALL 0x00637810
0045d185  PUSH EAX
0045d186  MOV EDX,dword ptr [0x0162ee80]
0045d18c  MOV EAX,dword ptr [EDX + 0x4]
0045d18f  PUSH EAX
0045d190  LEA ECX,[EBP + -0x40]
0045d193  PUSH ECX
0045d194  MOV ECX,dword ptr [0x0162ee84]
0045d19a  CALL 0x00639390
0045d19f  POP ESI
0045d1a0  MOV ESP,EBP
0045d1a2  POP EBP
0045d1a3  RET
