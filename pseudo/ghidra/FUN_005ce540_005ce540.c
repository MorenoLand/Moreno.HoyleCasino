// FUN_005ce540  005ce540

void __thiscall FUN_005ce540(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = false;
  if (param_2 == 0) {
    FUN_005fb3a0(0);
    uVar2 = FUN_00606570();
    switch(uVar2) {
    case 1:
      FUN_005d6de0();
      break;
    case 2:
      FUN_005d70e0(0,5000);
      break;
    case 3:
      *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0x4a1) = 1;
      break;
    case 4:
      *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0x4a1) = 1;
      bVar1 = true;
    }
    (**(code **)(*DAT_007947e4 + 0x278))();
    FUN_005dbcd0();
  }
  if (bVar1) {
    uVar2 = (**(code **)(*DAT_0162ee84 + 600))(0xffffffff);
    (**(code **)(*DAT_0162ee84 + 0x334))(uVar2);
  }
  return;
}

