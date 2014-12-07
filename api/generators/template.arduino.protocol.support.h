// Keyglove controller source code - KGAPI "{%packet_class%}" protocol command parser declarations
// {%date_ymd%} by Jeff Rowberg <jeff@rowberg.net>

/*
================================================================================
Keyglove source code is placed under the MIT license
Copyright (c) {%date_year%} Jeff Rowberg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

================================================================================
*/

/**
 * @file support_protocol_{%packet_class%}.h
 * @brief KGAPI "{%packet_class%}" protocol command parser declarations
 * @author Jeff Rowberg
 * @date {%date_ymd%}
 *
 * This file implements subsystem-specific command processing functions for the
 * "{%packet_class%}" part of the KGAPI protocol.
 *
 * This file is autogenerated. Normally it is not necessary to edit this file.
 */

#ifndef {%header_constant%}
#define {%header_constant%}

/* =========================== */
/* KGAPI CONSTANT DECLARATIONS */
/* =========================== */

{%command_macros%}
// -- command/event split --
{%event_macros%}

/* ================================ */
/* KGAPI COMMAND/EVENT DECLARATIONS */
/* ================================ */

{%command_function_declarations%}
// -- command/event split --
{%extern_event_callback_declarations%}

uint8_t process_protocol_command_{%packet_class%}(uint8_t *rxPacket);

#endif // {%header_constant%}
