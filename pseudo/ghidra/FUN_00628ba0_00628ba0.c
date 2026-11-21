// FUN_00628ba0  00628ba0

void __fastcall FUN_00628ba0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0xb8))();
    if (iVar2 == 0) break;
    FUN_00628ab0(0,0);
  }
  (**(code **)(*param_1 + 0xc0))(0xffffffff,1);
  param_1[0x1b] = 0;
  (**(code **)(*(int *)param_1[0x16] + 0x70))();
  cVar1 = FUN_00615160();
  if (cVar1 == '\0') {
    uVar3 = FUN_00615eb0();
    (**(code **)(*(int *)param_1[0x16] + 0x50))(uVar3);
  }
  else {
    uVar3 = FUN_00615eb0();
    (**(code **)(*(int *)param_1[0x16] + 0x48))(uVar3);
  }
  return;
}

