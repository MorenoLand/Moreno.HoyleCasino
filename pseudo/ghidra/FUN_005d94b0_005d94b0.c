// FUN_005d94b0  005d94b0

void __thiscall FUN_005d94b0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_00639110(param_2);
  iVar2 = FUN_00646e70();
  iVar2 = FUN_00646e40(iVar2 + 0x46);
  cVar1 = FUN_00646d90();
  (**(code **)(**(int **)(param_1 + 100) + 0x44))(iVar2 + (-(uint)(cVar1 != '\0') & 0x52) + 2);
  (**(code **)(**(int **)(param_1 + 100) + 0x74))();
  return;
}

