// FUN_0062b220  0062b220

undefined4 __thiscall
FUN_0062b220(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint *param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_40 [8];
  short local_38;
  uint local_2e;
  uint local_2a;
  ushort local_26;
  ushort local_24;
  int local_20;
  long local_1c [2];
  uint local_14;
  uint local_10;
  FILE *local_c;
  uint local_8;
  
  local_8 = 0;
  local_38 = 0;
  local_c = (FILE *)FUN_0062b430(param_2,param_3,local_1c,&local_14);
  if (local_c == (FILE *)0x0) {
    *param_4 = 0;
    uVar2 = 0;
  }
  else {
    *param_5 = local_14;
    fseek(local_c,local_1c[0],0);
    if (*(int *)(param_1 + 8) == 1) {
      fread(local_40,0x1e,1,local_c);
      if (local_2e != local_14) {
        FUN_005e9f20("header.dwCompressedSize == (DWORD)length","..\\scilib\\platform\\prf.cpp",0x97
                    );
      }
      local_8 = local_2a;
      fseek(local_c,(uint)local_26 + (uint)local_24,1);
    }
    if ((*(int *)(param_1 + 8) == 1) && (local_38 != 0)) {
      pvVar1 = operator_new(local_8);
      *param_4 = (int)pvVar1;
      puVar3 = operator_new(local_14 + 6);
      *puVar3 = 0x78;
      puVar3[1] = 0x9c;
      fread(puVar3 + 2,local_14,1,local_c);
      puVar3[local_14 + 2] = 0;
      puVar3[local_14 + 3] = 0;
      puVar3[local_14 + 4] = 0;
      puVar3[local_14 + 5] = 0;
      local_14 = local_14 + 2;
      local_10 = local_8;
      local_20 = FUN_0062ccf0(*param_4,&local_10,puVar3,local_14);
      *param_5 = local_8;
      operator_delete(puVar3);
      if (local_20 == 0) {
        uVar2 = 1;
      }
      else {
        operator_delete((void *)*param_4);
        uVar2 = 0;
      }
    }
    else {
      pvVar1 = operator_new(local_14);
      *param_4 = (int)pvVar1;
      if (*param_4 == 0) {
        uVar2 = 0;
      }
      else {
        fread((void *)*param_4,local_14,1,local_c);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

