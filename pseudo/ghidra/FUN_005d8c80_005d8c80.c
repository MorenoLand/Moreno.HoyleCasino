// FUN_005d8c80  005d8c80

bool __fastcall FUN_005d8c80(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (DAT_00795f95 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x80))();
    bVar2 = cVar1 == '\0';
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

