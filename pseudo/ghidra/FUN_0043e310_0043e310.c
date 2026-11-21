// FUN_0043e310  0043e310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043e310(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    (**(code **)(*DAT_0162ee84 + 0x80))(param_1[8],param_1,0,5,1,0x3f800000,_DAT_006b3654,0);
    break;
  case 2:
    (**(code **)(*param_1 + 4))(3);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*DAT_0162ee84 + 0x80))(param_1[10],0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xb],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    (**(code **)(**(int **)(DAT_007906ec + 4) + 4))(3);
    (**(code **)(**(int **)(DAT_007906ec + 4) + 0x1c))(0);
    break;
  case 4:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 5:
    (**(code **)(*param_1 + 4))(6);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 6:
    (**(code **)(*param_1 + 4))(7);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 7:
    (**(code **)(*param_1 + 4))(8);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[10],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 8:
    (**(code **)(*param_1 + 4))(9);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xb],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 9:
    (**(code **)(*param_1 + 4))(10);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xc],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 10:
    (**(code **)(*param_1 + 4))(0xb);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xd],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0xb:
    (**(code **)(*param_1 + 4))(0xc);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xe],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0xc:
    (**(code **)(*param_1 + 4))(0xd);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xf],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0xd:
    (**(code **)(*param_1 + 4))(0xe);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0x10],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0xe:
    (**(code **)(*param_1 + 4))(0xf);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0x11],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0xf:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 0x10:
    (**(code **)(*param_1 + 4))(0x11);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x11:
    (**(code **)(*param_1 + 4))(0x12);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x12:
    (**(code **)(*param_1 + 4))(0x13);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[10],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x13:
    (**(code **)(*param_1 + 4))(0x14);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xb],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x14:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 0x15:
    (**(code **)(*param_1 + 4))(0x16);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x16:
    (**(code **)(*param_1 + 4))(0x17);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x17:
    (**(code **)(*param_1 + 4))(0x18);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[10],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x18:
    (**(code **)(*param_1 + 4))(0x19);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xb],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x19:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 0x1a:
    (**(code **)(*param_1 + 4))(0x1b);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x1b:
    (**(code **)(*param_1 + 4))(0x1c);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x1c:
    (**(code **)(*param_1 + 4))(0x1d);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[10],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x1d:
    (**(code **)(*param_1 + 4))(0x1e);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xb],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x1e:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 0x1f:
    (**(code **)(*param_1 + 4))(0x20);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x20:
    (**(code **)(*param_1 + 4))(0x21);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x21:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 0x22:
    (**(code **)(*param_1 + 4))(0x23);
    piVar2 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar2 + 0xd0))();
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x23:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    piVar2 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar2 + 0xcc))();
    break;
  case 0x24:
    (**(code **)(*param_1 + 4))(0x25);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x25:
    (**(code **)(*param_1 + 4))(0x26);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[9],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x26:
    (**(code **)(*param_1 + 4))(0x27);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[10],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x27:
    (**(code **)(*param_1 + 4))(0x28);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xb],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x28:
    (**(code **)(*param_1 + 4))(0x29);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xc],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x29:
    (**(code **)(*param_1 + 4))(0x2a);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[0xd],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x8c);
    break;
  case 0x2a:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  case 0x2b:
    (**(code **)(*param_1 + 4))(0x2c);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_1[8],param_1,1,5,1,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x88);
    break;
  case 0x2c:
    *(undefined1 *)(param_1[3] + 0x188) = 0;
    break;
  default:
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\horseracingannouncer.cpp",0x330);
  }
  return;
}

