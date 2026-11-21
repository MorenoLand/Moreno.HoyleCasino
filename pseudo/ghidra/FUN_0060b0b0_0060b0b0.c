// FUN_0060b0b0  0060b0b0

void __thiscall FUN_0060b0b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *local_23c;
  char local_21c [264];
  undefined1 local_114 [264];
  uint local_c;
  undefined4 local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    if ((&DAT_00796d3c)[param_2 * 0x74] == '\0') {
      local_8 = *(undefined4 *)(&DAT_00796d38 + param_2 * 0x74);
    }
    else {
      local_8 = *(undefined4 *)
                 (&DAT_00796d44 + *(int *)(&DAT_00796d40 + param_2 * 0x74) * 4 + param_2 * 0x74);
    }
    sprintf(local_21c,"%d.ogg",local_8);
    cVar4 = FUN_0060af50(local_21c,local_114);
    if (cVar4 == '\0') {
      FUN_0062fde0(">>> unable to find/open sound file %s\n",local_21c);
      (&DAT_00796d3c)[param_2 * 0x74] = 0;
    }
    else {
      FUN_0062fde0(">>> opening streamed file: %s\n",local_114);
      local_23c = operator_new(0x2f8);
      if (local_23c == (undefined4 *)0x0) {
        local_23c = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(&DAT_00796ebc + param_2 * 8);
        uVar2 = *(undefined4 *)(&DAT_00796eb8 + param_2 * 8);
        uVar3 = *(undefined4 *)(&DAT_00796d18 + param_2 * 4);
        *local_23c = 0;
        local_23c[0xb6] = 0;
        local_23c[0xb7] = 0;
        local_23c[0xba] = uVar3;
        local_23c[0xb8] = uVar2;
        local_23c[0xb9] = uVar1;
        *(undefined1 *)(local_23c + 0xbc) = 0;
      }
      *(undefined4 **)(&DAT_00796d28 + param_2 * 0x74) = local_23c;
      if (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0) {
        FUN_0062fde0("ogg_stream creation failed!\n");
      }
      else {
        iVar5 = FUN_0062ce60(local_114,&DAT_015e5090);
        if (iVar5 == 0) {
          FUN_0062d7e0(param_4);
          if (param_3 == 0) {
            FUN_0062d870(1);
          }
          else {
            FUN_0062d870(0);
          }
          (&DAT_00796d30)[param_2 * 0x74] = 0;
          *(undefined4 *)(&DAT_00796d34 + param_2 * 0x74) = 0;
          FUN_0062d310();
        }
        else {
          FUN_0062fde0("ogg_stream::open() Failed!\n%s\n",&DAT_015e5090);
        }
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

