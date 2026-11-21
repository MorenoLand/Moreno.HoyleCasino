// FUN_0057a370  0057a370

void __fastcall FUN_0057a370(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    (**(code **)(*param_1 + 8))(1,0x28);
    break;
  case 1:
    if (DAT_00793570 == -1) {
      (**(code **)(*param_1 + 8))(2,0x28);
    }
    else if (DAT_00793570 < 0) {
      (**(code **)(*param_1 + 8))(2,0x78);
    }
    else {
      FUN_00579fc0();
    }
    break;
  case 2:
    FUN_00579c90();
    (**(code **)(*param_1 + 8))(3,0);
    break;
  case 3:
    DAT_0079346c = 1;
  }
  return;
}

