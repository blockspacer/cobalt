// Copyright 2012 Mozilla Corporation. All rights reserved.
// This code is governed by the license found in the LICENSE file.

/**
 * @description Tests that Intl
 *     meets the requirements for built-in objects defined by the introduction of
 *     chapter 15 of the ECMAScript Language Specification.
 * @author Norbert Lindenberg
 */

$INCLUDE("testBuiltInObject.js");

testBuiltInObject(fnGlobalObject().Intl, false, false, []);
testBuiltInObject(Intl, false, false, ["Collator", "NumberFormat", "DateTimeFormat"]);

