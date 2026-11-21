// FUN_00541360  00541360

void __thiscall FUN_00541360(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_2 * 3;
  if (param_3 == '\0') {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc + param_2 * 0xc) + 0x48 + param_2 * 0x20);
    local_10 = *puVar1;
    local_c = puVar1[1];
    (**(code **)(**(int **)(param_1 + 8 + param_2 * 0xc) + 0xc4))(&local_10,0,1);
  }
  else {
    *(undefined1 *)(param_1 + param_2 + 0xf6) = 1;
    uVar4 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_2,uVar4);
    FUN_005d6050(uVar4);
    cVar2 = FUN_005cb7d0(param_2,0);
    if (cVar2 != '\0') {
      FUN_005423a0(param_2,0,0,0);
    }
    cVar2 = FUN_005cb7d0(param_2,0);
    if (cVar2 != '\0') {
      FUN_005423a0(param_2,0,0,0);
    }
    iVar3 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar3 + 0x4a2) = 1;
  }
  return;
}

