; FUN_00586150  00586150
00586150  PUSH EBP
00586151  MOV EBP,ESP
00586153  PUSH -0x1
00586155  PUSH 0x6a6d0e
0058615a  MOV EAX,FS:[0x0]
00586160  PUSH EAX
00586161  SUB ESP,0xf8
00586167  MOV EAX,[0x00781870]
0058616c  XOR EAX,EBP
0058616e  PUSH EAX
0058616f  LEA EAX,[EBP + -0xc]
00586172  MOV FS:[0x0],EAX
00586178  MOV dword ptr [EBP + 0xffffff4c],ECX
0058617e  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586184  MOV dword ptr [EAX],0x6cccc4
0058618a  MOV dword ptr [EBP + -0x4],0x0
00586191  MOV ECX,dword ptr [EBP + 0xffffff4c]
00586197  CMP dword ptr [ECX + 0x3b6c],0x0
0058619e  JZ 0x005861eb
005861a0  MOV EDX,dword ptr [EBP + 0xffffff4c]
005861a6  MOV EAX,dword ptr [EDX + 0x3b6c]
005861ac  MOV dword ptr [EBP + -0x18],EAX
005861af  MOV ECX,dword ptr [EBP + -0x18]
005861b2  MOV dword ptr [EBP + -0x14],ECX
005861b5  CMP dword ptr [EBP + -0x14],0x0
005861b9  JZ 0x005861d1
005861bb  PUSH 0x1
005861bd  MOV EDX,dword ptr [EBP + -0x14]
005861c0  MOV EAX,dword ptr [EDX]
005861c2  MOV ECX,dword ptr [EBP + -0x14]
005861c5  MOV EDX,dword ptr [EAX]
005861c7  CALL EDX
005861c9  MOV dword ptr [EBP + 0xffffff48],EAX
005861cf  JMP 0x005861db
005861d1  MOV dword ptr [EBP + 0xffffff48],0x0
005861db  MOV EAX,dword ptr [EBP + 0xffffff4c]
005861e1  MOV dword ptr [EAX + 0x3b6c],0x0
005861eb  MOV ECX,dword ptr [EBP + 0xffffff4c]
005861f1  CMP dword ptr [ECX + 0x310],0x0
005861f8  JZ 0x00586245
005861fa  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586200  MOV EAX,dword ptr [EDX + 0x310]
00586206  MOV dword ptr [EBP + -0x20],EAX
00586209  MOV ECX,dword ptr [EBP + -0x20]
0058620c  MOV dword ptr [EBP + -0x1c],ECX
0058620f  CMP dword ptr [EBP + -0x1c],0x0
00586213  JZ 0x0058622b
00586215  PUSH 0x1
00586217  MOV EDX,dword ptr [EBP + -0x1c]
0058621a  MOV EAX,dword ptr [EDX]
0058621c  MOV ECX,dword ptr [EBP + -0x1c]
0058621f  MOV EDX,dword ptr [EAX]
00586221  CALL EDX
00586223  MOV dword ptr [EBP + 0xffffff44],EAX
00586229  JMP 0x00586235
0058622b  MOV dword ptr [EBP + 0xffffff44],0x0
00586235  MOV EAX,dword ptr [EBP + 0xffffff4c]
0058623b  MOV dword ptr [EAX + 0x310],0x0
00586245  MOV ECX,dword ptr [EBP + 0xffffff4c]
0058624b  CMP dword ptr [ECX + 0x314],0x0
00586252  JZ 0x0058629f
00586254  MOV EDX,dword ptr [EBP + 0xffffff4c]
0058625a  MOV EAX,dword ptr [EDX + 0x314]
00586260  MOV dword ptr [EBP + -0x28],EAX
00586263  MOV ECX,dword ptr [EBP + -0x28]
00586266  MOV dword ptr [EBP + -0x24],ECX
00586269  CMP dword ptr [EBP + -0x24],0x0
0058626d  JZ 0x00586285
0058626f  PUSH 0x1
00586271  MOV EDX,dword ptr [EBP + -0x24]
00586274  MOV EAX,dword ptr [EDX]
00586276  MOV ECX,dword ptr [EBP + -0x24]
00586279  MOV EDX,dword ptr [EAX]
0058627b  CALL EDX
0058627d  MOV dword ptr [EBP + 0xffffff40],EAX
00586283  JMP 0x0058628f
00586285  MOV dword ptr [EBP + 0xffffff40],0x0
0058628f  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586295  MOV dword ptr [EAX + 0x314],0x0
0058629f  MOV ECX,dword ptr [EBP + 0xffffff4c]
005862a5  CMP dword ptr [ECX + 0x3b74],0x0
005862ac  JZ 0x005862f9
005862ae  MOV EDX,dword ptr [EBP + 0xffffff4c]
005862b4  MOV EAX,dword ptr [EDX + 0x3b74]
005862ba  MOV dword ptr [EBP + -0x30],EAX
005862bd  MOV ECX,dword ptr [EBP + -0x30]
005862c0  MOV dword ptr [EBP + -0x2c],ECX
005862c3  CMP dword ptr [EBP + -0x2c],0x0
005862c7  JZ 0x005862df
005862c9  PUSH 0x1
005862cb  MOV EDX,dword ptr [EBP + -0x2c]
005862ce  MOV EAX,dword ptr [EDX]
005862d0  MOV ECX,dword ptr [EBP + -0x2c]
005862d3  MOV EDX,dword ptr [EAX]
005862d5  CALL EDX
005862d7  MOV dword ptr [EBP + 0xffffff3c],EAX
005862dd  JMP 0x005862e9
005862df  MOV dword ptr [EBP + 0xffffff3c],0x0
005862e9  MOV EAX,dword ptr [EBP + 0xffffff4c]
005862ef  MOV dword ptr [EAX + 0x3b74],0x0
005862f9  MOV ECX,dword ptr [EBP + 0xffffff4c]
005862ff  CMP dword ptr [ECX + 0x3b84],0x0
00586306  JZ 0x00586353
00586308  MOV EDX,dword ptr [EBP + 0xffffff4c]
0058630e  MOV EAX,dword ptr [EDX + 0x3b84]
00586314  MOV dword ptr [EBP + -0x38],EAX
00586317  MOV ECX,dword ptr [EBP + -0x38]
0058631a  MOV dword ptr [EBP + -0x34],ECX
0058631d  CMP dword ptr [EBP + -0x34],0x0
00586321  JZ 0x00586339
00586323  PUSH 0x1
00586325  MOV EDX,dword ptr [EBP + -0x34]
00586328  MOV EAX,dword ptr [EDX]
0058632a  MOV ECX,dword ptr [EBP + -0x34]
0058632d  MOV EDX,dword ptr [EAX]
0058632f  CALL EDX
00586331  MOV dword ptr [EBP + 0xffffff38],EAX
00586337  JMP 0x00586343
00586339  MOV dword ptr [EBP + 0xffffff38],0x0
00586343  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586349  MOV dword ptr [EAX + 0x3b84],0x0
00586353  MOV ECX,dword ptr [EBP + 0xffffff4c]
00586359  CMP dword ptr [ECX + 0x3b88],0x0
00586360  JZ 0x005863ad
00586362  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586368  MOV EAX,dword ptr [EDX + 0x3b88]
0058636e  MOV dword ptr [EBP + -0x40],EAX
00586371  MOV ECX,dword ptr [EBP + -0x40]
00586374  MOV dword ptr [EBP + -0x3c],ECX
00586377  CMP dword ptr [EBP + -0x3c],0x0
0058637b  JZ 0x00586393
0058637d  PUSH 0x1
0058637f  MOV EDX,dword ptr [EBP + -0x3c]
00586382  MOV EAX,dword ptr [EDX]
00586384  MOV ECX,dword ptr [EBP + -0x3c]
00586387  MOV EDX,dword ptr [EAX]
00586389  CALL EDX
0058638b  MOV dword ptr [EBP + 0xffffff34],EAX
00586391  JMP 0x0058639d
00586393  MOV dword ptr [EBP + 0xffffff34],0x0
0058639d  MOV EAX,dword ptr [EBP + 0xffffff4c]
005863a3  MOV dword ptr [EAX + 0x3b88],0x0
005863ad  MOV ECX,dword ptr [EBP + 0xffffff4c]
005863b3  CMP dword ptr [ECX + 0x3b8c],0x0
005863ba  JZ 0x00586407
005863bc  MOV EDX,dword ptr [EBP + 0xffffff4c]
005863c2  MOV EAX,dword ptr [EDX + 0x3b8c]
005863c8  MOV dword ptr [EBP + -0x48],EAX
005863cb  MOV ECX,dword ptr [EBP + -0x48]
005863ce  MOV dword ptr [EBP + -0x44],ECX
005863d1  CMP dword ptr [EBP + -0x44],0x0
005863d5  JZ 0x005863ed
005863d7  PUSH 0x1
005863d9  MOV EDX,dword ptr [EBP + -0x44]
005863dc  MOV EAX,dword ptr [EDX]
005863de  MOV ECX,dword ptr [EBP + -0x44]
005863e1  MOV EDX,dword ptr [EAX]
005863e3  CALL EDX
005863e5  MOV dword ptr [EBP + 0xffffff30],EAX
005863eb  JMP 0x005863f7
005863ed  MOV dword ptr [EBP + 0xffffff30],0x0
005863f7  MOV EAX,dword ptr [EBP + 0xffffff4c]
005863fd  MOV dword ptr [EAX + 0x3b8c],0x0
00586407  MOV ECX,dword ptr [EBP + 0xffffff4c]
0058640d  CMP dword ptr [ECX + 0x3b90],0x0
00586414  JZ 0x00586461
00586416  MOV EDX,dword ptr [EBP + 0xffffff4c]
0058641c  MOV EAX,dword ptr [EDX + 0x3b90]
00586422  MOV dword ptr [EBP + -0x50],EAX
00586425  MOV ECX,dword ptr [EBP + -0x50]
00586428  MOV dword ptr [EBP + -0x4c],ECX
0058642b  CMP dword ptr [EBP + -0x4c],0x0
0058642f  JZ 0x00586447
00586431  PUSH 0x1
00586433  MOV EDX,dword ptr [EBP + -0x4c]
00586436  MOV EAX,dword ptr [EDX]
00586438  MOV ECX,dword ptr [EBP + -0x4c]
0058643b  MOV EDX,dword ptr [EAX]
0058643d  CALL EDX
0058643f  MOV dword ptr [EBP + 0xffffff2c],EAX
00586445  JMP 0x00586451
00586447  MOV dword ptr [EBP + 0xffffff2c],0x0
00586451  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586457  MOV dword ptr [EAX + 0x3b90],0x0
00586461  MOV ECX,dword ptr [EBP + 0xffffff4c]
00586467  CMP dword ptr [ECX + 0x3b68],0x0
0058646e  JZ 0x005864bb
00586470  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586476  MOV EAX,dword ptr [EDX + 0x3b68]
0058647c  MOV dword ptr [EBP + -0x58],EAX
0058647f  MOV ECX,dword ptr [EBP + -0x58]
00586482  MOV dword ptr [EBP + -0x54],ECX
00586485  CMP dword ptr [EBP + -0x54],0x0
00586489  JZ 0x005864a1
0058648b  PUSH 0x1
0058648d  MOV EDX,dword ptr [EBP + -0x54]
00586490  MOV EAX,dword ptr [EDX]
00586492  MOV ECX,dword ptr [EBP + -0x54]
00586495  MOV EDX,dword ptr [EAX]
00586497  CALL EDX
00586499  MOV dword ptr [EBP + 0xffffff28],EAX
0058649f  JMP 0x005864ab
005864a1  MOV dword ptr [EBP + 0xffffff28],0x0
005864ab  MOV EAX,dword ptr [EBP + 0xffffff4c]
005864b1  MOV dword ptr [EAX + 0x3b68],0x0
005864bb  MOV ECX,dword ptr [EBP + 0xffffff4c]
005864c1  CMP dword ptr [ECX + 0x3b94],0x0
005864c8  JZ 0x00586515
005864ca  MOV EDX,dword ptr [EBP + 0xffffff4c]
005864d0  MOV EAX,dword ptr [EDX + 0x3b94]
005864d6  MOV dword ptr [EBP + -0x60],EAX
005864d9  MOV ECX,dword ptr [EBP + -0x60]
005864dc  MOV dword ptr [EBP + -0x5c],ECX
005864df  CMP dword ptr [EBP + -0x5c],0x0
005864e3  JZ 0x005864fb
005864e5  PUSH 0x1
005864e7  MOV EDX,dword ptr [EBP + -0x5c]
005864ea  MOV EAX,dword ptr [EDX]
005864ec  MOV ECX,dword ptr [EBP + -0x5c]
005864ef  MOV EDX,dword ptr [EAX]
005864f1  CALL EDX
005864f3  MOV dword ptr [EBP + 0xffffff24],EAX
005864f9  JMP 0x00586505
005864fb  MOV dword ptr [EBP + 0xffffff24],0x0
00586505  MOV EAX,dword ptr [EBP + 0xffffff4c]
0058650b  MOV dword ptr [EAX + 0x3b94],0x0
00586515  MOV ECX,dword ptr [EBP + 0xffffff4c]
0058651b  CMP dword ptr [ECX + 0x3b70],0x0
00586522  JZ 0x0058656f
00586524  MOV EDX,dword ptr [EBP + 0xffffff4c]
0058652a  MOV EAX,dword ptr [EDX + 0x3b70]
00586530  MOV dword ptr [EBP + -0x68],EAX
00586533  MOV ECX,dword ptr [EBP + -0x68]
00586536  MOV dword ptr [EBP + -0x64],ECX
00586539  CMP dword ptr [EBP + -0x64],0x0
0058653d  JZ 0x00586555
0058653f  PUSH 0x1
00586541  MOV EDX,dword ptr [EBP + -0x64]
00586544  MOV EAX,dword ptr [EDX]
00586546  MOV ECX,dword ptr [EBP + -0x64]
00586549  MOV EDX,dword ptr [EAX]
0058654b  CALL EDX
0058654d  MOV dword ptr [EBP + 0xffffff20],EAX
00586553  JMP 0x0058655f
00586555  MOV dword ptr [EBP + 0xffffff20],0x0
0058655f  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586565  MOV dword ptr [EAX + 0x3b70],0x0
0058656f  MOV ECX,dword ptr [EBP + 0xffffff4c]
00586575  CMP dword ptr [ECX + 0x3b98],0x0
0058657c  JZ 0x005865c9
0058657e  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586584  MOV EAX,dword ptr [EDX + 0x3b98]
0058658a  MOV dword ptr [EBP + -0x70],EAX
0058658d  MOV ECX,dword ptr [EBP + -0x70]
00586590  MOV dword ptr [EBP + -0x6c],ECX
00586593  CMP dword ptr [EBP + -0x6c],0x0
00586597  JZ 0x005865af
00586599  PUSH 0x1
0058659b  MOV EDX,dword ptr [EBP + -0x6c]
0058659e  MOV EAX,dword ptr [EDX]
005865a0  MOV ECX,dword ptr [EBP + -0x6c]
005865a3  MOV EDX,dword ptr [EAX]
005865a5  CALL EDX
005865a7  MOV dword ptr [EBP + 0xffffff1c],EAX
005865ad  JMP 0x005865b9
005865af  MOV dword ptr [EBP + 0xffffff1c],0x0
005865b9  MOV EAX,dword ptr [EBP + 0xffffff4c]
005865bf  MOV dword ptr [EAX + 0x3b98],0x0
005865c9  MOV ECX,dword ptr [EBP + 0xffffff4c]
005865cf  CMP dword ptr [ECX + 0x3b9c],0x0
005865d6  JZ 0x00586623
005865d8  MOV EDX,dword ptr [EBP + 0xffffff4c]
005865de  MOV EAX,dword ptr [EDX + 0x3b9c]
005865e4  MOV dword ptr [EBP + -0x78],EAX
005865e7  MOV ECX,dword ptr [EBP + -0x78]
005865ea  MOV dword ptr [EBP + -0x74],ECX
005865ed  CMP dword ptr [EBP + -0x74],0x0
005865f1  JZ 0x00586609
005865f3  PUSH 0x1
005865f5  MOV EDX,dword ptr [EBP + -0x74]
005865f8  MOV EAX,dword ptr [EDX]
005865fa  MOV ECX,dword ptr [EBP + -0x74]
005865fd  MOV EDX,dword ptr [EAX]
005865ff  CALL EDX
00586601  MOV dword ptr [EBP + 0xffffff18],EAX
00586607  JMP 0x00586613
00586609  MOV dword ptr [EBP + 0xffffff18],0x0
00586613  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586619  MOV dword ptr [EAX + 0x3b9c],0x0
00586623  MOV ECX,dword ptr [EBP + 0xffffff4c]
00586629  CMP dword ptr [ECX + 0x3ba0],0x0
00586630  JZ 0x0058667d
00586632  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586638  MOV EAX,dword ptr [EDX + 0x3ba0]
0058663e  MOV dword ptr [EBP + -0x80],EAX
00586641  MOV ECX,dword ptr [EBP + -0x80]
00586644  MOV dword ptr [EBP + -0x7c],ECX
00586647  CMP dword ptr [EBP + -0x7c],0x0
0058664b  JZ 0x00586663
0058664d  PUSH 0x1
0058664f  MOV EDX,dword ptr [EBP + -0x7c]
00586652  MOV EAX,dword ptr [EDX]
00586654  MOV ECX,dword ptr [EBP + -0x7c]
00586657  MOV EDX,dword ptr [EAX]
00586659  CALL EDX
0058665b  MOV dword ptr [EBP + 0xffffff14],EAX
00586661  JMP 0x0058666d
00586663  MOV dword ptr [EBP + 0xffffff14],0x0
0058666d  MOV EAX,dword ptr [EBP + 0xffffff4c]
00586673  MOV dword ptr [EAX + 0x3ba0],0x0
0058667d  MOV ECX,dword ptr [EBP + 0xffffff4c]
00586683  CMP dword ptr [ECX + 0x3c0c],0x0
0058668a  JZ 0x005866e9
0058668c  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586692  MOV EAX,dword ptr [EDX + 0x3c0c]
00586698  MOV dword ptr [EBP + 0xffffff78],EAX
0058669e  MOV ECX,dword ptr [EBP + 0xffffff78]
005866a4  MOV dword ptr [EBP + 0xffffff7c],ECX
005866aa  CMP dword ptr [EBP + 0xffffff7c],0x0
005866b1  JZ 0x005866cf
005866b3  PUSH 0x1
005866b5  MOV EDX,dword ptr [EBP + 0xffffff7c]
005866bb  MOV EAX,dword ptr [EDX]
005866bd  MOV ECX,dword ptr [EBP + 0xffffff7c]
005866c3  MOV EDX,dword ptr [EAX]
005866c5  CALL EDX
005866c7  MOV dword ptr [EBP + 0xffffff10],EAX
005866cd  JMP 0x005866d9
005866cf  MOV dword ptr [EBP + 0xffffff10],0x0
005866d9  MOV EAX,dword ptr [EBP + 0xffffff4c]
005866df  MOV dword ptr [EAX + 0x3c0c],0x0
005866e9  MOV dword ptr [EBP + -0x10],0x0
005866f0  JMP 0x005866fb
005866f2  MOV ECX,dword ptr [EBP + -0x10]
005866f5  ADD ECX,0x1
005866f8  MOV dword ptr [EBP + -0x10],ECX
005866fb  CMP dword ptr [EBP + -0x10],0x2
005866ff  JGE 0x0058677e
00586701  MOV EDX,dword ptr [EBP + -0x10]
00586704  MOV EAX,dword ptr [EBP + 0xffffff4c]
0058670a  CMP dword ptr [EAX + EDX*0x4 + 0x318],0x0
00586712  JZ 0x00586779
00586714  MOV ECX,dword ptr [EBP + -0x10]
00586717  MOV EDX,dword ptr [EBP + 0xffffff4c]
0058671d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x318]
00586724  MOV dword ptr [EBP + 0xffffff70],EAX
0058672a  MOV ECX,dword ptr [EBP + 0xffffff70]
00586730  MOV dword ptr [EBP + 0xffffff74],ECX
00586736  CMP dword ptr [EBP + 0xffffff74],0x0
0058673d  JZ 0x0058675b
0058673f  PUSH 0x1
00586741  MOV EDX,dword ptr [EBP + 0xffffff74]
00586747  MOV EAX,dword ptr [EDX]
00586749  MOV ECX,dword ptr [EBP + 0xffffff74]
0058674f  MOV EDX,dword ptr [EAX]
00586751  CALL EDX
00586753  MOV dword ptr [EBP + 0xffffff0c],EAX
00586759  JMP 0x00586765
0058675b  MOV dword ptr [EBP + 0xffffff0c],0x0
00586765  MOV EAX,dword ptr [EBP + -0x10]
00586768  MOV ECX,dword ptr [EBP + 0xffffff4c]
0058676e  MOV dword ptr [ECX + EAX*0x4 + 0x318],0x0
00586779  JMP 0x005866f2
0058677e  MOV dword ptr [EBP + -0x10],0x0
00586785  JMP 0x00586790
00586787  MOV EDX,dword ptr [EBP + -0x10]
0058678a  ADD EDX,0x1
0058678d  MOV dword ptr [EBP + -0x10],EDX
00586790  CMP dword ptr [EBP + -0x10],0x5
00586794  JGE 0x00586813
00586796  MOV EAX,dword ptr [EBP + -0x10]
00586799  MOV ECX,dword ptr [EBP + 0xffffff4c]
0058679f  CMP dword ptr [ECX + EAX*0x4 + 0x2fc],0x0
005867a7  JZ 0x0058680e
005867a9  MOV EDX,dword ptr [EBP + -0x10]
005867ac  MOV EAX,dword ptr [EBP + 0xffffff4c]
005867b2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2fc]
005867b9  MOV dword ptr [EBP + 0xffffff68],ECX
005867bf  MOV EDX,dword ptr [EBP + 0xffffff68]
005867c5  MOV dword ptr [EBP + 0xffffff6c],EDX
005867cb  CMP dword ptr [EBP + 0xffffff6c],0x0
005867d2  JZ 0x005867f0
005867d4  PUSH 0x1
005867d6  MOV EAX,dword ptr [EBP + 0xffffff6c]
005867dc  MOV EDX,dword ptr [EAX]
005867de  MOV ECX,dword ptr [EBP + 0xffffff6c]
005867e4  MOV EAX,dword ptr [EDX]
005867e6  CALL EAX
005867e8  MOV dword ptr [EBP + 0xffffff08],EAX
005867ee  JMP 0x005867fa
005867f0  MOV dword ptr [EBP + 0xffffff08],0x0
005867fa  MOV ECX,dword ptr [EBP + -0x10]
005867fd  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586803  MOV dword ptr [EDX + ECX*0x4 + 0x2fc],0x0
0058680e  JMP 0x00586787
00586813  MOV dword ptr [EBP + -0x10],0x0
0058681a  JMP 0x00586825
0058681c  MOV EAX,dword ptr [EBP + -0x10]
0058681f  ADD EAX,0x1
00586822  MOV dword ptr [EBP + -0x10],EAX
00586825  CMP dword ptr [EBP + -0x10],0x2
00586829  JGE 0x0058682d
0058682b  JMP 0x0058681c
0058682d  MOV dword ptr [EBP + -0x10],0x0
00586834  JMP 0x0058683f
00586836  MOV ECX,dword ptr [EBP + -0x10]
00586839  ADD ECX,0x1
0058683c  MOV dword ptr [EBP + -0x10],ECX
0058683f  CMP dword ptr [EBP + -0x10],0x3
00586843  JGE 0x005868c2
00586845  MOV EDX,dword ptr [EBP + -0x10]
00586848  MOV EAX,dword ptr [EBP + 0xffffff4c]
0058684e  CMP dword ptr [EAX + EDX*0x4 + 0x3b78],0x0
00586856  JZ 0x005868bd
00586858  MOV ECX,dword ptr [EBP + -0x10]
0058685b  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586861  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3b78]
00586868  MOV dword ptr [EBP + 0xffffff60],EAX
0058686e  MOV ECX,dword ptr [EBP + 0xffffff60]
00586874  MOV dword ptr [EBP + 0xffffff64],ECX
0058687a  CMP dword ptr [EBP + 0xffffff64],0x0
00586881  JZ 0x0058689f
00586883  PUSH 0x1
00586885  MOV EDX,dword ptr [EBP + 0xffffff64]
0058688b  MOV EAX,dword ptr [EDX]
0058688d  MOV ECX,dword ptr [EBP + 0xffffff64]
00586893  MOV EDX,dword ptr [EAX]
00586895  CALL EDX
00586897  MOV dword ptr [EBP + 0xffffff04],EAX
0058689d  JMP 0x005868a9
0058689f  MOV dword ptr [EBP + 0xffffff04],0x0
005868a9  MOV EAX,dword ptr [EBP + -0x10]
005868ac  MOV ECX,dword ptr [EBP + 0xffffff4c]
005868b2  MOV dword ptr [ECX + EAX*0x4 + 0x3b78],0x0
005868bd  JMP 0x00586836
005868c2  MOV dword ptr [EBP + -0x10],0x0
005868c9  JMP 0x005868d4
005868cb  MOV EDX,dword ptr [EBP + -0x10]
005868ce  ADD EDX,0x1
005868d1  MOV dword ptr [EBP + -0x10],EDX
005868d4  CMP dword ptr [EBP + -0x10],0x50
005868d8  JGE 0x00586957
005868da  MOV EAX,dword ptr [EBP + -0x10]
005868dd  MOV ECX,dword ptr [EBP + 0xffffff4c]
005868e3  CMP dword ptr [ECX + EAX*0x4 + 0x1bc],0x0
005868eb  JZ 0x00586952
005868ed  MOV EDX,dword ptr [EBP + -0x10]
005868f0  MOV EAX,dword ptr [EBP + 0xffffff4c]
005868f6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1bc]
005868fd  MOV dword ptr [EBP + 0xffffff58],ECX
00586903  MOV EDX,dword ptr [EBP + 0xffffff58]
00586909  MOV dword ptr [EBP + 0xffffff5c],EDX
0058690f  CMP dword ptr [EBP + 0xffffff5c],0x0
00586916  JZ 0x00586934
00586918  PUSH 0x1
0058691a  MOV EAX,dword ptr [EBP + 0xffffff5c]
00586920  MOV EDX,dword ptr [EAX]
00586922  MOV ECX,dword ptr [EBP + 0xffffff5c]
00586928  MOV EAX,dword ptr [EDX]
0058692a  CALL EAX
0058692c  MOV dword ptr [EBP + 0xffffff00],EAX
00586932  JMP 0x0058693e
00586934  MOV dword ptr [EBP + 0xffffff00],0x0
0058693e  MOV ECX,dword ptr [EBP + -0x10]
00586941  MOV EDX,dword ptr [EBP + 0xffffff4c]
00586947  MOV dword ptr [EDX + ECX*0x4 + 0x1bc],0x0
00586952  JMP 0x005868cb
00586957  MOV EAX,dword ptr [EBP + 0xffffff4c]
0058695d  CMP dword ptr [EAX + 0x324],0x0
00586964  JZ 0x005869c3
00586966  MOV ECX,dword ptr [EBP + 0xffffff4c]
0058696c  MOV EDX,dword ptr [ECX + 0x324]
00586972  MOV dword ptr [EBP + 0xffffff50],EDX
00586978  MOV EAX,dword ptr [EBP + 0xffffff50]
0058697e  MOV dword ptr [EBP + 0xffffff54],EAX
00586984  CMP dword ptr [EBP + 0xffffff54],0x0
0058698b  JZ 0x005869a9
0058698d  PUSH 0x1
0058698f  MOV ECX,dword ptr [EBP + 0xffffff54]
00586995  MOV EDX,dword ptr [ECX]
00586997  MOV ECX,dword ptr [EBP + 0xffffff54]
0058699d  MOV EAX,dword ptr [EDX]
0058699f  CALL EAX
005869a1  MOV dword ptr [EBP + 0xfffffefc],EAX
005869a7  JMP 0x005869b3
005869a9  MOV dword ptr [EBP + 0xfffffefc],0x0
005869b3  MOV ECX,dword ptr [EBP + 0xffffff4c]
005869b9  MOV dword ptr [ECX + 0x324],0x0
005869c3  MOV dword ptr [0x00793584],0x0
005869cd  MOV dword ptr [EBP + -0x4],0xffffffff
005869d4  MOV ECX,dword ptr [EBP + 0xffffff4c]
005869da  CALL 0x005f7260
005869df  MOV ECX,dword ptr [EBP + -0xc]
005869e2  MOV dword ptr FS:[0x0],ECX
005869e9  POP ECX
005869ea  MOV ESP,EBP
005869ec  POP EBP
005869ed  RET
