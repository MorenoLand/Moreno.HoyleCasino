// FUN_005d6c60  005d6c60

bool __fastcall FUN_005d6c60(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_1c [6];
  
  local_1c[0] = 10000;
  local_1c[1] = 50000;
  local_1c[2] = 100000;
  local_1c[3] = 1000000;
  local_1c[4] = 100000000;
  local_1c[5] = 1000000000;
  iVar2 = FUN_005d52e0(param_1);
  cVar1 = *(char *)(iVar2 + 0x2a);
  iVar2 = FUN_005d5a50();
  return local_1c[cVar1] <= iVar2;
}

