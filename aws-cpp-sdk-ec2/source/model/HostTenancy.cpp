/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/HostTenancy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int dedicated_HASH = HashingUtils::HashString("dedicated");
static const int host_HASH = HashingUtils::HashString("host");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace HostTenancyMapper
{


HostTenancy GetHostTenancyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == dedicated_HASH)
  {
     return HostTenancy::dedicated;
  }
  else if (hashCode == host_HASH)
  {
     return HostTenancy::host;
  }
  return HostTenancy::NOT_SET;
}

Aws::String GetNameForHostTenancy(HostTenancy enumValue)
{
  switch(enumValue)
  {
  case HostTenancy::dedicated:
    return "dedicated";
  case HostTenancy::host:
    return "host";
  default:
    return "";
  }
}

} // namespace HostTenancyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws