// FUN_005fc3d0  005fc3d0

void __fastcall FUN_005fc3d0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005f3b30();
  if (cVar1 == '\0') {
    if (param_1[1] == 0) {
      uVar2 = FUN_005fc380();
      (**(code **)(*param_1 + 0x14))(uVar2);
    }
    else {
      FUN_005fc3d0();
    }
  }
  return;
}

