// FUN_00615740  00615740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00615740(int *param_1)

{
  double _X;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  int local_24;
  
  cVar1 = FUN_00615160();
  if (cVar1 == '\0') {
    local_24 = (**(code **)(*(int *)param_1[0x16] + 0x54))();
  }
  else {
    local_24 = (**(code **)(*(int *)param_1[0x16] + 0x4c))();
  }
  iVar2 = FUN_00615eb0();
  iVar3 = (**(code **)(*param_1 + 0xb8))();
  if (iVar3 <= param_1[0x1b]) {
    param_1[0x1b] = 0;
  }
  iVar3 = FUN_00615880();
  if (iVar3 != 0) {
    iVar3 = FUN_00615610();
    iVar4 = FUN_00615880();
    _X = (double)(local_24 - iVar2) / ((double)iVar3 / (double)iVar4);
    dVar5 = fmod(_X,1.0);
    if (_DAT_006b2c38 <= dVar5) {
      ceil(_X);
    }
    else {
      floor(_X);
    }
    iVar2 = FUN_00686cc0();
    param_1[0x1b] = iVar2;
  }
  (**(code **)(*param_1 + 0xd0))();
  return;
}

